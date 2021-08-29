###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='TSSRPairExample.x3d',name='title'),
    meta(content='An example scene demonstrating the TSSRPairPrototype; A Tropo Satellite Support Radio (TSSR) is a short-range (< 20 miles) point- to-point SHF communication system designed to support remote equipment and users by replacing long cable runs.',name='description'),
    meta(content='Mike Hunsberger',name='creator'),
    meta(content='1 May 2001',name='created'),
    meta(content='22 August 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/TSSR/TSSRPairExample.x3d',name='identifier'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/TSSR/TSSRPairPrototype.x3d',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  ExternProtoDeclare definitions must be included verbatim 
    children=[
    ExternProtoDeclare(name='TSSRPair',url=["TSSRPairPrototype.x3d#TSSRPair","https://savage.nps.edu/Savage/CommunicationsAndSensors/TSSR/TSSRPairPrototype.x3d#TSSRPair","TSSRPairPrototype.wrl#TSSRPair","https://savage.nps.edu/Savage/CommunicationsAndSensors/TSSR/TSSRPairPrototype.wrl#TSSRPair"],
      field=[
      field(accessType='initializeOnly',name='TSSR1Location',type='SFVec3f'),
      field(accessType='initializeOnly',name='TSSR2Location',type='SFVec3f')]),
    WorldInfo(info=["Authors: Mike Hunsberger","Revised: 30 April 2001","Purpose: Pair of TSSRs","Script: none","Browser: CosmoPlayer"],title='AntennaWorld'),
    ProtoInstance(name='TSSRPair',
      fieldValue=[
      fieldValue(name='TSSR1Location',value=(200,0,5000)),
      fieldValue(name='TSSR2Location',value=(0,0,0))]),
    Background(groundAngle=[1.57079],groundColor=[(1,0.8,0.6),(0.6,0.4,0.2)],skyAngle=[0.2],skyColor=[(1,1,1),(0.2,0.2,1)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TSSRPairExample.py")
