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
    meta(content='CircleFishExample.x3d',name='title'),
    meta(content='This is a circle fish using the CircleFish prototype. Fish size max width is 10 cm (X-axis) length is 1 m (Y-axis) max height is 1 m (Z-axis)',name='description'),
    meta(content='Ildeniz Duman',name='creator'),
    meta(content='Scott Tufts',name='translator'),
    meta(content='1 May 1998',name='created'),
    meta(content='11 December 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/CircleFishExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CircleFishExample.x3d'),
    ExternProtoDeclare(appinfo='Simple model of a fish swimming in a circle',name='CircleFish',url=["CircleFishPrototype.x3d#CircleFish","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/CircleFishPrototype.x3d#CircleFish","CircleFishPrototype.wrl#CircleFish","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/CircleFishPrototype.wrl#CircleFish"],
      field=[
      field(accessType='inputOutput',name='skinTextureUrl',type='MFString'),
      field(accessType='inputOutput',name='fishScale',type='SFVec3f'),
      field(accessType='inputOutput',name='fishColor',type='SFColor'),
      field(accessType='inputOutput',name='finColor',type='SFColor'),
      field(accessType='inputOutput',name='positionKey',type='MFFloat'),
      field(accessType='inputOutput',name='positionKeyValue',type='MFVec3f'),
      field(accessType='inputOutput',name='orientationKey',type='MFFloat'),
      field(accessType='inputOutput',name='orientationKeyValue',type='MFRotation'),
      field(accessType='inputOutput',name='orbitTime',type='SFTime')]),
    Viewpoint(description='Circle Fish'),
    ProtoInstance(name='CircleFish',
      #  fieldValue tags revise default values 
      fieldValue=[
      fieldValue(name='skinTextureUrl',value=["blue.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/blue.jpg"]),
      fieldValue(name='fishScale',value=(1,0.5,1)),
      fieldValue(name='finColor',value=(0,0,1)),
      fieldValue(name='positionKey',value=[0,1]),
      fieldValue(name='positionKeyValue',value=[(0,0,0),(1,1,1)]),
      fieldValue(name='orbitTime',value=10)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CircleFishExample.py")
