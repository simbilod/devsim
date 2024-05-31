/***
DEVSIM
Copyright 2013 DEVSIM LLC

SPDX-License-Identifier: Apache-2.0
***/

#ifndef DEVSIM_WRITER_HH
#define DEVSIM_WRITER_HH
#include "MeshWriter.hh"
#include <string>
/// Start out by writing the all out to one file
class DevsimWriter : public MeshWriter {
public:
  ~DevsimWriter();

private:
  bool WriteMeshes_(const std::string & /*filename*/,
                    std::string & /*errorString*/);
  bool WriteMesh_(const std::string & /*deviceName*/,
                  const std::string & /*filename*/,
                  std::string & /*errorString*/);
};
#endif
