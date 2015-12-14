/*
 *
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *
 */

package org.apache.airavata.registry.core.replica.catalog.utils;

import org.apache.airavata.common.exception.ApplicationSettingsException;
import org.apache.airavata.common.utils.ServerSettings;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import javax.persistence.*;
import java.util.HashMap;
import java.util.Map;

public class DataCatalogJPAUtils {
    private final static Logger logger = LoggerFactory.getLogger(DataCatalogJPAUtils.class);

    private static final String PERSISTENCE_UNIT_NAME = "datacatalog_data";
    private static final String DATACATALOG_JDBC_DRIVER = "datacatalog.jdbc.driver";
    private static final String DATACATALOG_JDBC_URL = "datacatalog.jdbc.url";
    private static final String DATACATALOG_JDBC_USER = "datacatalog.jdbc.user";
    private static final String DATACATALOG_JDBC_PWD = "datacatalog.jdbc.password";
    private static final String DATACATALOG_VALIDATION_QUERY = "datacatalog.validationQuery";

    @PersistenceUnit(unitName="datacatalog_data")
    protected static EntityManagerFactory factory;

    @PersistenceContext(unitName="datacatalog_data")
    private static EntityManager dataCatEntityManager;

    public static EntityManager getEntityManager() throws ApplicationSettingsException {
        if (factory == null) {
            String connectionProperties = "DriverClassName=" + readServerProperties(DATACATALOG_JDBC_DRIVER) + "," +
                    "Url=" + readServerProperties(DATACATALOG_JDBC_URL) + "?autoReconnect=true," +
                    "Username=" + readServerProperties(DATACATALOG_JDBC_USER) + "," +
                    "Password=" + readServerProperties(DATACATALOG_JDBC_PWD) +
                    ",validationQuery=" + readServerProperties(DATACATALOG_VALIDATION_QUERY);
            System.out.println(connectionProperties);
            Map<String, String> properties = new HashMap<String, String>();
            properties.put("openjpa.ConnectionDriverName", "org.apache.commons.dbcp.BasicDataSource");
            properties.put("openjpa.ConnectionProperties", connectionProperties);
            properties.put("openjpa.DynamicEnhancementAgent", "true");
            properties.put("openjpa.RuntimeUnenhancedClasses", "unsupported");
            properties.put("openjpa.RemoteCommitProvider","sjvm");
            properties.put("openjpa.Log","DefaultLevel=INFO, Runtime=INFO, Tool=INFO, SQL=INFO");
            properties.put("openjpa.jdbc.SynchronizeMappings", "buildSchema(ForeignKeys=true)");
            properties.put("openjpa.jdbc.QuerySQLCache", "false");
            properties.put("openjpa.ConnectionFactoryProperties", "PrettyPrint=true, PrettyPrintLineLength=72," +
                    " PrintParameters=true, MaxActive=10, MaxIdle=5, MinIdle=2, MaxWait=31536000,  autoReconnect=true");
            factory = Persistence.createEntityManagerFactory(PERSISTENCE_UNIT_NAME, properties);
        }
        dataCatEntityManager = factory.createEntityManager();
        return dataCatEntityManager;
    }

    private static String readServerProperties (String propertyName) throws ApplicationSettingsException {
        try {
            return ServerSettings.getSetting(propertyName);
        } catch (ApplicationSettingsException e) {
            logger.error("Unable to read airavata-server.properties...", e);
            throw new ApplicationSettingsException("Unable to read airavata-server.properties...");
        }
    }
}