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
    meta(content='TRC170PairExample.x3d',name='title'),
    meta(content='Instantiatio of the TRC-170 Pair Prototype. A TRC-170 is a long-range SHF communication system. It operates in 3 modes. 1)Direct point-to-point link (< 30 miles). 2) Tropospheric shot (up to 100 or 150 miles, depending on system version). 3) Defraction shot over an a terrain feature or object in the path ( < 50 miles).',name='description'),
    meta(content='Mike Hunsberger',name='creator'),
    meta(content='7 May 2001',name='created'),
    meta(content='22 August 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/TRC170/TRC170PairExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  ExternProtoDeclare definitions must be included verbatim 
    children=[
    ExternProtoDeclare(name='TRC170Pair',url=["TRC170PairPrototype.x3d#TRC170Pair","https://savage.nps.edu/Savage/CommunicationsAndSensors/TRC170/TRC170PairPrototype.x3d#TRC170Pair","TRC170PairPrototype.wrl#TRC170Pair","https://savage.nps.edu/Savage/CommunicationsAndSensors/TRC170/TRC170PairPrototype.wrl#TRC170Pair"],
      field=[
      field(accessType='initializeOnly',name='TRC1Location',type='SFVec3f'),
      field(accessType='initializeOnly',name='TRC2Location',type='SFVec3f'),
      field(accessType='initializeOnly',name='OperatingMode',type='SFString')]),
    WorldInfo(info=["Authors: Mike Hunsberger","Revised: 30 April 2001","Purpose: Pair of TSSRs","Script: none","Browser: CosmoPlayer"],title='AntennaWorld'),
    Background(groundAngle=[1.57079],groundColor=[(1,0.8,0.6),(0.6,0.4,0.2)],skyAngle=[0.2],skyColor=[(1,1,1),(0.2,0.2,1)]),
    ProtoInstance(name='TRC170Pair',
      fieldValue=[
      fieldValue(name='TRC1Location',value=(15000,0,15000)),
      fieldValue(name='TRC2Location',value=(0,0,0)),
      fieldValue(name='OperatingMode',value='TROPOSCATTER')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TRC170PairExample.py")
