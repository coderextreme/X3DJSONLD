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
    meta(content='ViewpointGroupExample.x3d',name='title'),
    meta(content='Example to test ViewpointGroup, which contains Viewpoint and ViewpointGroup nodes, allowing nested lists and viewpoint scoping in viewpoint lists.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='4 November 2003',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='ViewpointListViewpointGroupProse.html',name='reference'),
    meta(content='ViewpointGroupPrototype.x3d',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/navigation.html#Viewpoint',name='reference'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Viewpoint',name='reference'),
    meta(content='ViewpointGroup Viewpoint',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/ViewpointGroupExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ViewpointGroupExample.x3d'),
    ExternProtoDeclare(name='ViewpointGroup',url=["ViewpointGroupPrototype.x3d#ViewpointGroup","https://www.web3d.org/x3d/content/examples/Basic/development/ViewpointGroupPrototype.x3d#ViewpointGroup","ViewpointGroupPrototype.wrl#ViewpointGroup","https://www.web3d.org/x3d/content/examples/Basic/development/ViewpointGroupPrototype.wrl#ViewpointGroup"],
      field=[
      field(accessType='inputOutput',appinfo='[Viewpoint | ViewpointGroup] only',name='children',type='MFNode'),
      field(accessType='inputOutput',appinfo='Text description or navigation hint to be displayed for this ViewpointGroup.',name='description',type='SFString'),
      field(accessType='inputOutput',appinfo='Whether this ViewpointGroup is displayed in current viewpoint list.',name='displayed',type='SFBool'),
      field(accessType='inputOutput',appinfo='Position offset from origin of local coordinate system.',name='center',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='[0..infinity) Radius in meters of Proximity box within which the ViewpointGroup is usable and displayed on the viewpoint list.',name='radius',type='SFFloat'),
      field(accessType='inputOnly',appinfo='[0..infinity) Radius in meters of Proximity box within which the ViewpointGroup is usable and displayed on the viewpoint list.',name='set_radius',type='SFFloat'),
      field(accessType='inputOutput',appinfo='Whether viewpoint needs to retain (true) or rezero (false) any prior user navigation offsets from defined viewpoint position orientation.',name='retainUserOffsets',type='SFBool')]),
    Viewpoint(description='inside scope: ViewpointGroup',position=(0,0,5)),
    Viewpoint(description='outside scope: ViewpointGroup',position=(0,0,12)),
    ProtoInstance(name='ViewpointGroup',
      fieldValue=[
      fieldValue(name='description',value='first ViewpointGroup'),
      fieldValue(name='radius',value=8),
      fieldValue(name='children',
        children=[
        Viewpoint(description='level 1, viewpoint 1',position=(0,0,6)),
        Viewpoint(description='level 1, viewpoint 2',position=(0,0,5)),
        ProtoInstance(name='ViewpointGroup',
          fieldValue=[
          fieldValue(name='description',value='second ViewpointGroup'),
          fieldValue(name='radius',value=8),
          fieldValue(name='children',
            children=[
            Viewpoint(description='level 2, viewpoint 1',position=(0,0,5)),
            Viewpoint(description='level 2, viewpoint 2',position=(0,0,6))])]),
        Viewpoint(description='level 1, viewpoint 3',position=(0,0,5))])]),
    Transform(
      children=[
      Shape(
        geometry=Text(string=["Select viewpoints","in viewpoint list","to test ViewpointGroup"],
          fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.8)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.4,0.2))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ViewpointGroupExample.py")
