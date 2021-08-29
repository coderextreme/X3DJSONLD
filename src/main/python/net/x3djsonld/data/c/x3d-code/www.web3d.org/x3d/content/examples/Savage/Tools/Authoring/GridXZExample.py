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
    meta(content='GridXZExample.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='2 February 2003',name='created'),
    meta(content='30 March 2016',name='modified'),
    meta(content='update corresponding X3D-Edit template to match quoting of MFString fieldValues',name='TODO'),
    meta(content='Line grid authoring tool to enable precise measurement of objects in 3D space - fixed position. Oriented along XZ plane, default size 20m by 20m, default block size 1m by 1m.',name='description'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/GridXZExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Line grid authoring tool to enable precise measurement of objects in 3D space - fixed position. Oriented along XZ plane size 20m by 20m.',name='GridXZ',url=["GridXZPrototype.x3d#GridXZ","https://savage.nps.edu/Savage/Tools/Authoring/GridXZPrototype.x3d#GridXZ","GridXZPrototype.wrl#GridXZ","https://savage.nps.edu/Savage/Tools/Authoring/GridXZPrototype.wrl#GridXZ"],
      field=[
      field(accessType='initializeOnly',appinfo='Purpose of this grid displayed for overall Viewpoint',name='description',type='SFString'),
      field(accessType='inputOutput',appinfo='color for descriptive labels at grid edges and corners',name='labelColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='default unscaled size: 10m by 10m',name='scale',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='label location offset (in meters) to improve readability',name='labelsOffset',type='SFVec3f'),
      field(accessType='inputOutput',name='originLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='-Z axis',name='NorthLabel',type='MFString'),
      field(accessType='inputOutput',name='NorthEastLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='+X axis',name='EastLabel',type='MFString'),
      field(accessType='inputOutput',name='SouthEastLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='+Z axis',name='SouthLabel',type='MFString'),
      field(accessType='inputOutput',name='SouthWestLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='-X axis',name='WestLabel',type='MFString'),
      field(accessType='inputOutput',name='NorthWestLabel',type='MFString')]),
    #  default values provided in this instance 
    ProtoInstance(name='GridXZ',
      fieldValue=[
      fieldValue(name='description',value='GridXZ'),
      fieldValue(name='labelColor',value=(1,1,1)),
      fieldValue(name='scale',value=(1,1,1)),
      fieldValue(name='labelsOffset',value=(0,-0.5,0)),
      fieldValue(name='originLabel',value=["origin","0 0 0"]),
      fieldValue(name='NorthLabel',value=["North","-Z"]),
      fieldValue(name='NorthEastLabel',value=["10 0 -10"]),
      fieldValue(name='EastLabel',value=["East","+X"]),
      fieldValue(name='SouthEastLabel',value=["10 0 10"]),
      fieldValue(name='SouthLabel',value=["South","+Z"]),
      fieldValue(name='SouthWestLabel',value=["-10 0 10"]),
      fieldValue(name='WestLabel',value=["West","-X"]),
      fieldValue(name='NorthWestLabel',value=["-10 0 -10"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GridXZExample.py")
