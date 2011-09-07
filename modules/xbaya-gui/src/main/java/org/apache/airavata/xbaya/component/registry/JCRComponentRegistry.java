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

package org.apache.airavata.xbaya.component.registry;

import java.net.URI;
import java.util.HashMap;
import java.util.List;

import org.apache.airavata.commons.gfac.api.impl.JCRRegistry;
import org.apache.airavata.commons.gfac.type.ServiceDescription;
import org.apache.airavata.xbaya.component.gui.ComponentTreeNode;

public class JCRComponentRegistry extends ComponentRegistry {

    private static final String NAME = "JCR Components";
    
    private JCRRegistry registry;

    public JCRComponentRegistry(URI url, String username, String password) {
        HashMap<String, String> map = new HashMap<String, String>();
        map.put("org.apache.jackrabbit.repository.uri", url.toString());
        this.registry = new JCRRegistry("org.apache.jackrabbit.rmi.repository.RmiRepositoryFactory", username,
                password, map);        
    }

    /**
     * @see org.apache.airavata.xbaya.component.registry.ComponentRegistry#getComponentTree()
     */
    @Override
    public ComponentTreeNode getComponentTree() {
        ComponentTreeNode tree = new ComponentTreeNode(this);
        List<ServiceDescription> services = this.registry.searchServiceDescription("");
        for (ServiceDescription serviceDescription : services) {
            String serviceName = serviceDescription.getName();
            JCRComponentReference jcr = new JCRComponentReference(serviceName, registry.getWSDL(serviceName));
            tree.add(new ComponentTreeNode(jcr));    
        }
        
        return tree;
    }

    /**
     * @see org.apache.airavata.xbaya.component.registry.ComponentRegistry#getName()
     */
    @Override
    public String getName() {
        return NAME;
    }

}