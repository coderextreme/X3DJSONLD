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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='ReportedContactExample.x3d',name='title'),
    meta(content='Example instance of prototype for a reported contact.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='15 October 2001',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Weapons/UnderwaterMines/ReportedContactExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Provide icon and contact information for a reported contact. Position ProtoInstances using the depth and location where found.',name='ReportedContact',url=["ReportedContactPrototype.x3d#ReportedContact","../../Weapons/UnderwaterMines/ReportedContactPrototype.x3d#ReportedContact","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/ReportedContactPrototype.x3d#ReportedContact","ReportedContactPrototype.wrl#ReportedContact","../../Weapons/UnderwaterMines/ReportedContactPrototype.wrl#ReportedContact","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/ReportedContactPrototype.wrl#ReportedContact"],
      field=[
      field(accessType='initializeOnly',name='name',type='MFString'),
      field(accessType='initializeOnly',name='aboveViewpointLabel',type='SFString'),
      field(accessType='initializeOnly',name='closeViewpointLabel',type='SFString'),
      field(accessType='inputOutput',name='description',type='MFString'),
      field(accessType='inputOutput',appinfo='Latitude and longitude (or local coordinates) for display purposes.',name='reportedPosition',type='MFString'),
      field(accessType='initializeOnly',name='classificationCode',type='SFInt32'),
      field(accessType='inputOutput',appinfo='"provide filename and url of contact image as separate quoted strings"',name='imageUrl',type='MFString'),
      field(accessType='inputOutput',appinfo='Aspect-ratio x-y scale of image icon (keep z=1)',name='imageScale',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='Relative position of image icon',name='imageOffset',type='SFVec3f'),
      field(accessType='inputOutput',name='textColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='Relative position of image icon',name='textOffset',type='SFVec3f')]),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0,0.2,0.4),(0.05,0.25,0.6),(0.1,0.2,0.4)],skyAngle=[1.309,1.571],skyColor=[(0.1,0.1,0.4),(0.1,0.125,0.4),(0.1,0.1,0.3)]),
    ProtoInstance(name='ReportedContact',
      fieldValue=[
      fieldValue(name='name',value=["ContactName"]),
      fieldValue(name='aboveViewpointLabel',value='Hello Reported Contact (100m above)'),
      fieldValue(name='closeViewpointLabel',value='Closeup: Reported Contact (10m away)'),
      fieldValue(name='description',value=["classification: Manta","confidence: 4","remarks: example"]),
      fieldValue(name='reportedPosition',value=["00.0 N 000.0 W"]),
      fieldValue(name='classificationCode',value=1),
      fieldValue(name='imageUrl',value=["minelocator.jpg","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/minelocator.jpg"]),
      fieldValue(name='imageScale',value=(1.6,1.0,1))]
      #  additional available fieldValues: imageOffset, textColor, textOffset 
      )])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ReportedContactExample.py")
