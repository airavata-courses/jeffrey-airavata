/**
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Workflow_H
#define Workflow_H

#include <thrift/TDispatchProcessor.h>
#include "airavataAPI_types.h"

namespace apache { namespace airavata { namespace api {

class WorkflowIf {
 public:
  virtual ~WorkflowIf() {}
  virtual void getAllWorkflows(std::vector<std::string> & _return) = 0;
  virtual void getWorkflow( ::Workflow& _return, const std::string& workflowTemplateId) = 0;
  virtual void deleteWorkflow(const std::string& workflowTemplateId) = 0;
  virtual void registerWorkflow(std::string& _return, const  ::Workflow& workflow) = 0;
  virtual void updateWorkflow(const std::string& workflowTemplateId, const  ::Workflow& workflow) = 0;
  virtual void getWorkflowTemplateId(std::string& _return, const std::string& workflowName) = 0;
  virtual bool isWorkflowExistWithName(const std::string& workflowName) = 0;
};

class WorkflowIfFactory {
 public:
  typedef WorkflowIf Handler;

  virtual ~WorkflowIfFactory() {}

  virtual WorkflowIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(WorkflowIf* /* handler */) = 0;
};

class WorkflowIfSingletonFactory : virtual public WorkflowIfFactory {
 public:
  WorkflowIfSingletonFactory(const boost::shared_ptr<WorkflowIf>& iface) : iface_(iface) {}
  virtual ~WorkflowIfSingletonFactory() {}

  virtual WorkflowIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(WorkflowIf* /* handler */) {}

 protected:
  boost::shared_ptr<WorkflowIf> iface_;
};

class WorkflowNull : virtual public WorkflowIf {
 public:
  virtual ~WorkflowNull() {}
  void getAllWorkflows(std::vector<std::string> & /* _return */) {
    return;
  }
  void getWorkflow( ::Workflow& /* _return */, const std::string& /* workflowTemplateId */) {
    return;
  }
  void deleteWorkflow(const std::string& /* workflowTemplateId */) {
    return;
  }
  void registerWorkflow(std::string& /* _return */, const  ::Workflow& /* workflow */) {
    return;
  }
  void updateWorkflow(const std::string& /* workflowTemplateId */, const  ::Workflow& /* workflow */) {
    return;
  }
  void getWorkflowTemplateId(std::string& /* _return */, const std::string& /* workflowName */) {
    return;
  }
  bool isWorkflowExistWithName(const std::string& /* workflowName */) {
    bool _return = false;
    return _return;
  }
};


class Workflow_getAllWorkflows_args {
 public:

  Workflow_getAllWorkflows_args() {
  }

  virtual ~Workflow_getAllWorkflows_args() throw() {}


  bool operator == (const Workflow_getAllWorkflows_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const Workflow_getAllWorkflows_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Workflow_getAllWorkflows_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Workflow_getAllWorkflows_pargs {
 public:


  virtual ~Workflow_getAllWorkflows_pargs() throw() {}


  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Workflow_getAllWorkflows_result__isset {
  _Workflow_getAllWorkflows_result__isset() : success(false), ire(false), ace(false), ase(false) {}
  bool success;
  bool ire;
  bool ace;
  bool ase;
} _Workflow_getAllWorkflows_result__isset;

class Workflow_getAllWorkflows_result {
 public:

  Workflow_getAllWorkflows_result() {
  }

  virtual ~Workflow_getAllWorkflows_result() throw() {}

  std::vector<std::string>  success;
   ::apache::airavata::api::error::InvalidRequestException ire;
   ::apache::airavata::api::error::AiravataClientException ace;
   ::apache::airavata::api::error::AiravataSystemException ase;

  _Workflow_getAllWorkflows_result__isset __isset;

  void __set_success(const std::vector<std::string> & val) {
    success = val;
  }

  void __set_ire(const  ::apache::airavata::api::error::InvalidRequestException& val) {
    ire = val;
  }

  void __set_ace(const  ::apache::airavata::api::error::AiravataClientException& val) {
    ace = val;
  }

  void __set_ase(const  ::apache::airavata::api::error::AiravataSystemException& val) {
    ase = val;
  }

  bool operator == (const Workflow_getAllWorkflows_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(ire == rhs.ire))
      return false;
    if (!(ace == rhs.ace))
      return false;
    if (!(ase == rhs.ase))
      return false;
    return true;
  }
  bool operator != (const Workflow_getAllWorkflows_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Workflow_getAllWorkflows_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Workflow_getAllWorkflows_presult__isset {
  _Workflow_getAllWorkflows_presult__isset() : success(false), ire(false), ace(false), ase(false) {}
  bool success;
  bool ire;
  bool ace;
  bool ase;
} _Workflow_getAllWorkflows_presult__isset;

class Workflow_getAllWorkflows_presult {
 public:


  virtual ~Workflow_getAllWorkflows_presult() throw() {}

  std::vector<std::string> * success;
   ::apache::airavata::api::error::InvalidRequestException ire;
   ::apache::airavata::api::error::AiravataClientException ace;
   ::apache::airavata::api::error::AiravataSystemException ase;

  _Workflow_getAllWorkflows_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class Workflow_getWorkflow_args {
 public:

  Workflow_getWorkflow_args() : workflowTemplateId() {
  }

  virtual ~Workflow_getWorkflow_args() throw() {}

  std::string workflowTemplateId;

  void __set_workflowTemplateId(const std::string& val) {
    workflowTemplateId = val;
  }

  bool operator == (const Workflow_getWorkflow_args & rhs) const
  {
    if (!(workflowTemplateId == rhs.workflowTemplateId))
      return false;
    return true;
  }
  bool operator != (const Workflow_getWorkflow_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Workflow_getWorkflow_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Workflow_getWorkflow_pargs {
 public:


  virtual ~Workflow_getWorkflow_pargs() throw() {}

  const std::string* workflowTemplateId;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Workflow_getWorkflow_result__isset {
  _Workflow_getWorkflow_result__isset() : success(false), ire(false), ace(false), ase(false) {}
  bool success;
  bool ire;
  bool ace;
  bool ase;
} _Workflow_getWorkflow_result__isset;

class Workflow_getWorkflow_result {
 public:

  Workflow_getWorkflow_result() {
  }

  virtual ~Workflow_getWorkflow_result() throw() {}

   ::Workflow success;
   ::apache::airavata::api::error::InvalidRequestException ire;
   ::apache::airavata::api::error::AiravataClientException ace;
   ::apache::airavata::api::error::AiravataSystemException ase;

  _Workflow_getWorkflow_result__isset __isset;

  void __set_success(const  ::Workflow& val) {
    success = val;
  }

  void __set_ire(const  ::apache::airavata::api::error::InvalidRequestException& val) {
    ire = val;
  }

  void __set_ace(const  ::apache::airavata::api::error::AiravataClientException& val) {
    ace = val;
  }

  void __set_ase(const  ::apache::airavata::api::error::AiravataSystemException& val) {
    ase = val;
  }

  bool operator == (const Workflow_getWorkflow_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(ire == rhs.ire))
      return false;
    if (!(ace == rhs.ace))
      return false;
    if (!(ase == rhs.ase))
      return false;
    return true;
  }
  bool operator != (const Workflow_getWorkflow_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Workflow_getWorkflow_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Workflow_getWorkflow_presult__isset {
  _Workflow_getWorkflow_presult__isset() : success(false), ire(false), ace(false), ase(false) {}
  bool success;
  bool ire;
  bool ace;
  bool ase;
} _Workflow_getWorkflow_presult__isset;

class Workflow_getWorkflow_presult {
 public:


  virtual ~Workflow_getWorkflow_presult() throw() {}

   ::Workflow* success;
   ::apache::airavata::api::error::InvalidRequestException ire;
   ::apache::airavata::api::error::AiravataClientException ace;
   ::apache::airavata::api::error::AiravataSystemException ase;

  _Workflow_getWorkflow_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class Workflow_deleteWorkflow_args {
 public:

  Workflow_deleteWorkflow_args() : workflowTemplateId() {
  }

  virtual ~Workflow_deleteWorkflow_args() throw() {}

  std::string workflowTemplateId;

  void __set_workflowTemplateId(const std::string& val) {
    workflowTemplateId = val;
  }

  bool operator == (const Workflow_deleteWorkflow_args & rhs) const
  {
    if (!(workflowTemplateId == rhs.workflowTemplateId))
      return false;
    return true;
  }
  bool operator != (const Workflow_deleteWorkflow_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Workflow_deleteWorkflow_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Workflow_deleteWorkflow_pargs {
 public:


  virtual ~Workflow_deleteWorkflow_pargs() throw() {}

  const std::string* workflowTemplateId;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Workflow_deleteWorkflow_result__isset {
  _Workflow_deleteWorkflow_result__isset() : ire(false), ace(false), ase(false) {}
  bool ire;
  bool ace;
  bool ase;
} _Workflow_deleteWorkflow_result__isset;

class Workflow_deleteWorkflow_result {
 public:

  Workflow_deleteWorkflow_result() {
  }

  virtual ~Workflow_deleteWorkflow_result() throw() {}

   ::apache::airavata::api::error::InvalidRequestException ire;
   ::apache::airavata::api::error::AiravataClientException ace;
   ::apache::airavata::api::error::AiravataSystemException ase;

  _Workflow_deleteWorkflow_result__isset __isset;

  void __set_ire(const  ::apache::airavata::api::error::InvalidRequestException& val) {
    ire = val;
  }

  void __set_ace(const  ::apache::airavata::api::error::AiravataClientException& val) {
    ace = val;
  }

  void __set_ase(const  ::apache::airavata::api::error::AiravataSystemException& val) {
    ase = val;
  }

  bool operator == (const Workflow_deleteWorkflow_result & rhs) const
  {
    if (!(ire == rhs.ire))
      return false;
    if (!(ace == rhs.ace))
      return false;
    if (!(ase == rhs.ase))
      return false;
    return true;
  }
  bool operator != (const Workflow_deleteWorkflow_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Workflow_deleteWorkflow_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Workflow_deleteWorkflow_presult__isset {
  _Workflow_deleteWorkflow_presult__isset() : ire(false), ace(false), ase(false) {}
  bool ire;
  bool ace;
  bool ase;
} _Workflow_deleteWorkflow_presult__isset;

class Workflow_deleteWorkflow_presult {
 public:


  virtual ~Workflow_deleteWorkflow_presult() throw() {}

   ::apache::airavata::api::error::InvalidRequestException ire;
   ::apache::airavata::api::error::AiravataClientException ace;
   ::apache::airavata::api::error::AiravataSystemException ase;

  _Workflow_deleteWorkflow_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class Workflow_registerWorkflow_args {
 public:

  Workflow_registerWorkflow_args() {
  }

  virtual ~Workflow_registerWorkflow_args() throw() {}

   ::Workflow workflow;

  void __set_workflow(const  ::Workflow& val) {
    workflow = val;
  }

  bool operator == (const Workflow_registerWorkflow_args & rhs) const
  {
    if (!(workflow == rhs.workflow))
      return false;
    return true;
  }
  bool operator != (const Workflow_registerWorkflow_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Workflow_registerWorkflow_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Workflow_registerWorkflow_pargs {
 public:


  virtual ~Workflow_registerWorkflow_pargs() throw() {}

  const  ::Workflow* workflow;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Workflow_registerWorkflow_result__isset {
  _Workflow_registerWorkflow_result__isset() : success(false), ire(false), ace(false), ase(false) {}
  bool success;
  bool ire;
  bool ace;
  bool ase;
} _Workflow_registerWorkflow_result__isset;

class Workflow_registerWorkflow_result {
 public:

  Workflow_registerWorkflow_result() : success() {
  }

  virtual ~Workflow_registerWorkflow_result() throw() {}

  std::string success;
   ::apache::airavata::api::error::InvalidRequestException ire;
   ::apache::airavata::api::error::AiravataClientException ace;
   ::apache::airavata::api::error::AiravataSystemException ase;

  _Workflow_registerWorkflow_result__isset __isset;

  void __set_success(const std::string& val) {
    success = val;
  }

  void __set_ire(const  ::apache::airavata::api::error::InvalidRequestException& val) {
    ire = val;
  }

  void __set_ace(const  ::apache::airavata::api::error::AiravataClientException& val) {
    ace = val;
  }

  void __set_ase(const  ::apache::airavata::api::error::AiravataSystemException& val) {
    ase = val;
  }

  bool operator == (const Workflow_registerWorkflow_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(ire == rhs.ire))
      return false;
    if (!(ace == rhs.ace))
      return false;
    if (!(ase == rhs.ase))
      return false;
    return true;
  }
  bool operator != (const Workflow_registerWorkflow_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Workflow_registerWorkflow_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Workflow_registerWorkflow_presult__isset {
  _Workflow_registerWorkflow_presult__isset() : success(false), ire(false), ace(false), ase(false) {}
  bool success;
  bool ire;
  bool ace;
  bool ase;
} _Workflow_registerWorkflow_presult__isset;

class Workflow_registerWorkflow_presult {
 public:


  virtual ~Workflow_registerWorkflow_presult() throw() {}

  std::string* success;
   ::apache::airavata::api::error::InvalidRequestException ire;
   ::apache::airavata::api::error::AiravataClientException ace;
   ::apache::airavata::api::error::AiravataSystemException ase;

  _Workflow_registerWorkflow_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class Workflow_updateWorkflow_args {
 public:

  Workflow_updateWorkflow_args() : workflowTemplateId() {
  }

  virtual ~Workflow_updateWorkflow_args() throw() {}

  std::string workflowTemplateId;
   ::Workflow workflow;

  void __set_workflowTemplateId(const std::string& val) {
    workflowTemplateId = val;
  }

  void __set_workflow(const  ::Workflow& val) {
    workflow = val;
  }

  bool operator == (const Workflow_updateWorkflow_args & rhs) const
  {
    if (!(workflowTemplateId == rhs.workflowTemplateId))
      return false;
    if (!(workflow == rhs.workflow))
      return false;
    return true;
  }
  bool operator != (const Workflow_updateWorkflow_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Workflow_updateWorkflow_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Workflow_updateWorkflow_pargs {
 public:


  virtual ~Workflow_updateWorkflow_pargs() throw() {}

  const std::string* workflowTemplateId;
  const  ::Workflow* workflow;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Workflow_updateWorkflow_result__isset {
  _Workflow_updateWorkflow_result__isset() : ire(false), ace(false), ase(false) {}
  bool ire;
  bool ace;
  bool ase;
} _Workflow_updateWorkflow_result__isset;

class Workflow_updateWorkflow_result {
 public:

  Workflow_updateWorkflow_result() {
  }

  virtual ~Workflow_updateWorkflow_result() throw() {}

   ::apache::airavata::api::error::InvalidRequestException ire;
   ::apache::airavata::api::error::AiravataClientException ace;
   ::apache::airavata::api::error::AiravataSystemException ase;

  _Workflow_updateWorkflow_result__isset __isset;

  void __set_ire(const  ::apache::airavata::api::error::InvalidRequestException& val) {
    ire = val;
  }

  void __set_ace(const  ::apache::airavata::api::error::AiravataClientException& val) {
    ace = val;
  }

  void __set_ase(const  ::apache::airavata::api::error::AiravataSystemException& val) {
    ase = val;
  }

  bool operator == (const Workflow_updateWorkflow_result & rhs) const
  {
    if (!(ire == rhs.ire))
      return false;
    if (!(ace == rhs.ace))
      return false;
    if (!(ase == rhs.ase))
      return false;
    return true;
  }
  bool operator != (const Workflow_updateWorkflow_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Workflow_updateWorkflow_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Workflow_updateWorkflow_presult__isset {
  _Workflow_updateWorkflow_presult__isset() : ire(false), ace(false), ase(false) {}
  bool ire;
  bool ace;
  bool ase;
} _Workflow_updateWorkflow_presult__isset;

class Workflow_updateWorkflow_presult {
 public:


  virtual ~Workflow_updateWorkflow_presult() throw() {}

   ::apache::airavata::api::error::InvalidRequestException ire;
   ::apache::airavata::api::error::AiravataClientException ace;
   ::apache::airavata::api::error::AiravataSystemException ase;

  _Workflow_updateWorkflow_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class Workflow_getWorkflowTemplateId_args {
 public:

  Workflow_getWorkflowTemplateId_args() : workflowName() {
  }

  virtual ~Workflow_getWorkflowTemplateId_args() throw() {}

  std::string workflowName;

  void __set_workflowName(const std::string& val) {
    workflowName = val;
  }

  bool operator == (const Workflow_getWorkflowTemplateId_args & rhs) const
  {
    if (!(workflowName == rhs.workflowName))
      return false;
    return true;
  }
  bool operator != (const Workflow_getWorkflowTemplateId_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Workflow_getWorkflowTemplateId_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Workflow_getWorkflowTemplateId_pargs {
 public:


  virtual ~Workflow_getWorkflowTemplateId_pargs() throw() {}

  const std::string* workflowName;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Workflow_getWorkflowTemplateId_result__isset {
  _Workflow_getWorkflowTemplateId_result__isset() : success(false), ire(false), ace(false), ase(false) {}
  bool success;
  bool ire;
  bool ace;
  bool ase;
} _Workflow_getWorkflowTemplateId_result__isset;

class Workflow_getWorkflowTemplateId_result {
 public:

  Workflow_getWorkflowTemplateId_result() : success() {
  }

  virtual ~Workflow_getWorkflowTemplateId_result() throw() {}

  std::string success;
   ::apache::airavata::api::error::InvalidRequestException ire;
   ::apache::airavata::api::error::AiravataClientException ace;
   ::apache::airavata::api::error::AiravataSystemException ase;

  _Workflow_getWorkflowTemplateId_result__isset __isset;

  void __set_success(const std::string& val) {
    success = val;
  }

  void __set_ire(const  ::apache::airavata::api::error::InvalidRequestException& val) {
    ire = val;
  }

  void __set_ace(const  ::apache::airavata::api::error::AiravataClientException& val) {
    ace = val;
  }

  void __set_ase(const  ::apache::airavata::api::error::AiravataSystemException& val) {
    ase = val;
  }

  bool operator == (const Workflow_getWorkflowTemplateId_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(ire == rhs.ire))
      return false;
    if (!(ace == rhs.ace))
      return false;
    if (!(ase == rhs.ase))
      return false;
    return true;
  }
  bool operator != (const Workflow_getWorkflowTemplateId_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Workflow_getWorkflowTemplateId_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Workflow_getWorkflowTemplateId_presult__isset {
  _Workflow_getWorkflowTemplateId_presult__isset() : success(false), ire(false), ace(false), ase(false) {}
  bool success;
  bool ire;
  bool ace;
  bool ase;
} _Workflow_getWorkflowTemplateId_presult__isset;

class Workflow_getWorkflowTemplateId_presult {
 public:


  virtual ~Workflow_getWorkflowTemplateId_presult() throw() {}

  std::string* success;
   ::apache::airavata::api::error::InvalidRequestException ire;
   ::apache::airavata::api::error::AiravataClientException ace;
   ::apache::airavata::api::error::AiravataSystemException ase;

  _Workflow_getWorkflowTemplateId_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class Workflow_isWorkflowExistWithName_args {
 public:

  Workflow_isWorkflowExistWithName_args() : workflowName() {
  }

  virtual ~Workflow_isWorkflowExistWithName_args() throw() {}

  std::string workflowName;

  void __set_workflowName(const std::string& val) {
    workflowName = val;
  }

  bool operator == (const Workflow_isWorkflowExistWithName_args & rhs) const
  {
    if (!(workflowName == rhs.workflowName))
      return false;
    return true;
  }
  bool operator != (const Workflow_isWorkflowExistWithName_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Workflow_isWorkflowExistWithName_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Workflow_isWorkflowExistWithName_pargs {
 public:


  virtual ~Workflow_isWorkflowExistWithName_pargs() throw() {}

  const std::string* workflowName;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Workflow_isWorkflowExistWithName_result__isset {
  _Workflow_isWorkflowExistWithName_result__isset() : success(false), ire(false), ace(false), ase(false) {}
  bool success;
  bool ire;
  bool ace;
  bool ase;
} _Workflow_isWorkflowExistWithName_result__isset;

class Workflow_isWorkflowExistWithName_result {
 public:

  Workflow_isWorkflowExistWithName_result() : success(0) {
  }

  virtual ~Workflow_isWorkflowExistWithName_result() throw() {}

  bool success;
   ::apache::airavata::api::error::InvalidRequestException ire;
   ::apache::airavata::api::error::AiravataClientException ace;
   ::apache::airavata::api::error::AiravataSystemException ase;

  _Workflow_isWorkflowExistWithName_result__isset __isset;

  void __set_success(const bool val) {
    success = val;
  }

  void __set_ire(const  ::apache::airavata::api::error::InvalidRequestException& val) {
    ire = val;
  }

  void __set_ace(const  ::apache::airavata::api::error::AiravataClientException& val) {
    ace = val;
  }

  void __set_ase(const  ::apache::airavata::api::error::AiravataSystemException& val) {
    ase = val;
  }

  bool operator == (const Workflow_isWorkflowExistWithName_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(ire == rhs.ire))
      return false;
    if (!(ace == rhs.ace))
      return false;
    if (!(ase == rhs.ase))
      return false;
    return true;
  }
  bool operator != (const Workflow_isWorkflowExistWithName_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Workflow_isWorkflowExistWithName_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Workflow_isWorkflowExistWithName_presult__isset {
  _Workflow_isWorkflowExistWithName_presult__isset() : success(false), ire(false), ace(false), ase(false) {}
  bool success;
  bool ire;
  bool ace;
  bool ase;
} _Workflow_isWorkflowExistWithName_presult__isset;

class Workflow_isWorkflowExistWithName_presult {
 public:


  virtual ~Workflow_isWorkflowExistWithName_presult() throw() {}

  bool* success;
   ::apache::airavata::api::error::InvalidRequestException ire;
   ::apache::airavata::api::error::AiravataClientException ace;
   ::apache::airavata::api::error::AiravataSystemException ase;

  _Workflow_isWorkflowExistWithName_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class WorkflowClient : virtual public WorkflowIf {
 public:
  WorkflowClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) :
    piprot_(prot),
    poprot_(prot) {
    iprot_ = prot.get();
    oprot_ = prot.get();
  }
  WorkflowClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) :
    piprot_(iprot),
    poprot_(oprot) {
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void getAllWorkflows(std::vector<std::string> & _return);
  void send_getAllWorkflows();
  void recv_getAllWorkflows(std::vector<std::string> & _return);
  void getWorkflow( ::Workflow& _return, const std::string& workflowTemplateId);
  void send_getWorkflow(const std::string& workflowTemplateId);
  void recv_getWorkflow( ::Workflow& _return);
  void deleteWorkflow(const std::string& workflowTemplateId);
  void send_deleteWorkflow(const std::string& workflowTemplateId);
  void recv_deleteWorkflow();
  void registerWorkflow(std::string& _return, const  ::Workflow& workflow);
  void send_registerWorkflow(const  ::Workflow& workflow);
  void recv_registerWorkflow(std::string& _return);
  void updateWorkflow(const std::string& workflowTemplateId, const  ::Workflow& workflow);
  void send_updateWorkflow(const std::string& workflowTemplateId, const  ::Workflow& workflow);
  void recv_updateWorkflow();
  void getWorkflowTemplateId(std::string& _return, const std::string& workflowName);
  void send_getWorkflowTemplateId(const std::string& workflowName);
  void recv_getWorkflowTemplateId(std::string& _return);
  bool isWorkflowExistWithName(const std::string& workflowName);
  void send_isWorkflowExistWithName(const std::string& workflowName);
  bool recv_isWorkflowExistWithName();
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class WorkflowProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<WorkflowIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (WorkflowProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_getAllWorkflows(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getWorkflow(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_deleteWorkflow(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_registerWorkflow(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_updateWorkflow(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getWorkflowTemplateId(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_isWorkflowExistWithName(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  WorkflowProcessor(boost::shared_ptr<WorkflowIf> iface) :
    iface_(iface) {
    processMap_["getAllWorkflows"] = &WorkflowProcessor::process_getAllWorkflows;
    processMap_["getWorkflow"] = &WorkflowProcessor::process_getWorkflow;
    processMap_["deleteWorkflow"] = &WorkflowProcessor::process_deleteWorkflow;
    processMap_["registerWorkflow"] = &WorkflowProcessor::process_registerWorkflow;
    processMap_["updateWorkflow"] = &WorkflowProcessor::process_updateWorkflow;
    processMap_["getWorkflowTemplateId"] = &WorkflowProcessor::process_getWorkflowTemplateId;
    processMap_["isWorkflowExistWithName"] = &WorkflowProcessor::process_isWorkflowExistWithName;
  }

  virtual ~WorkflowProcessor() {}
};

class WorkflowProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  WorkflowProcessorFactory(const ::boost::shared_ptr< WorkflowIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< WorkflowIfFactory > handlerFactory_;
};

class WorkflowMultiface : virtual public WorkflowIf {
 public:
  WorkflowMultiface(std::vector<boost::shared_ptr<WorkflowIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~WorkflowMultiface() {}
 protected:
  std::vector<boost::shared_ptr<WorkflowIf> > ifaces_;
  WorkflowMultiface() {}
  void add(boost::shared_ptr<WorkflowIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void getAllWorkflows(std::vector<std::string> & _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getAllWorkflows(_return);
    }
    ifaces_[i]->getAllWorkflows(_return);
    return;
  }

  void getWorkflow( ::Workflow& _return, const std::string& workflowTemplateId) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getWorkflow(_return, workflowTemplateId);
    }
    ifaces_[i]->getWorkflow(_return, workflowTemplateId);
    return;
  }

  void deleteWorkflow(const std::string& workflowTemplateId) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->deleteWorkflow(workflowTemplateId);
    }
    ifaces_[i]->deleteWorkflow(workflowTemplateId);
  }

  void registerWorkflow(std::string& _return, const  ::Workflow& workflow) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->registerWorkflow(_return, workflow);
    }
    ifaces_[i]->registerWorkflow(_return, workflow);
    return;
  }

  void updateWorkflow(const std::string& workflowTemplateId, const  ::Workflow& workflow) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->updateWorkflow(workflowTemplateId, workflow);
    }
    ifaces_[i]->updateWorkflow(workflowTemplateId, workflow);
  }

  void getWorkflowTemplateId(std::string& _return, const std::string& workflowName) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getWorkflowTemplateId(_return, workflowName);
    }
    ifaces_[i]->getWorkflowTemplateId(_return, workflowName);
    return;
  }

  bool isWorkflowExistWithName(const std::string& workflowName) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->isWorkflowExistWithName(workflowName);
    }
    return ifaces_[i]->isWorkflowExistWithName(workflowName);
  }

};

}}} // namespace

#endif
