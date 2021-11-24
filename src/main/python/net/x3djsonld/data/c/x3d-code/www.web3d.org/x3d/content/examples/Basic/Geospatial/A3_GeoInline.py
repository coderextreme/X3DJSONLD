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
    meta(content='A3_GeoInline.x3d',name='title'),
    meta(content='Martin Reddy SRI, original example',name='creator'),
    meta(content='Don Brutzman NPS, X3D encoding',name='creator'),
    meta(content='26 June 2000',name='created'),
    meta(content='17 June 2020',name='modified'),
    meta(content='Specification example: on-demand inlining via GeoInline for scene resource management.',name='description'),
    meta(content='GeoVRML 1.1 GeoInline functionality is embedded in X3D Inline node, GeoInline no longer supported in X3D.',name='warning'),
    meta(content='http://www.geovrml.org/1.0/doc/examples.html',name='reference'),
    meta(content='originals/geoinlineTest.wrl',name='reference'),
    meta(content='VRML 97 encoding http://www.geovrml.org/1.0/doc/examples/geoinline.wrl',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/A3_GeoInline.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='A3_GeoInline.x3d'),
    Group(
      #  Original GeoVRML GeoInline node replaced by improved X3D Inline node 
      children=[
      Inline(DEF='TestInline',load=False,url=["BoxSimple.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/BoxSimple.x3d","BoxSimple.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/BoxSimple.wrl"])]
      #  don't load TestInline until 'true' event sent 
      ),
    #  Two cones that are used to load and unload the URL for the box 
    Transform(scale=(0.5,0.5,0.5),translation=(2,1.0,0),
      children=[
      TouchSensor(DEF='LoadTrigger',description='click to load inlined Box'),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0))),
        geometry=Cone(),)]),
    Transform(scale=(0.5,0.5,0.5),translation=(1.5,1.2,0.3),
      children=[
      Shape(
        geometry=Text(length=[0],string=["Load Cube"],
          fontStyle=FontStyle(),),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.6,0.3))))]),
    Transform(rotation=(1,0,0,3.1415),scale=(0.5,0.5,0.5),translation=(2,-1.0,0),
      children=[
      TouchSensor(DEF='UnLoadTrigger',description='click to unload inlined Box'),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1))),
        geometry=Cone(),)]),
    Transform(scale=(0.5,0.5,0.5),translation=(1.5,-1.5,0.3),
      children=[
      Shape(
        geometry=Text(length=[0],string=["Unload Cube"],
          fontStyle=FontStyle(),),
        appearance=Appearance(
          material=Material(diffuseColor=(0.6,0.3,0))))]),
    #  a couple of scripts to process the events from clicking on the cones 
    Script(DEF='ReturnTrue',
      field=[
      field(accessType='inputOnly',name='set_value',type='SFBool'),
      field(accessType='outputOnly',name='value_changed',type='SFBool')]),
    Script(DEF='ReturnFalse',
      field=[
      field(accessType='inputOnly',name='set_value',type='SFBool'),
      field(accessType='outputOnly',name='value_changed',type='SFBool')]),
    ROUTE(fromField='isActive',fromNode='LoadTrigger',toField='set_value',toNode='ReturnTrue'),
    ROUTE(fromField='value_changed',fromNode='ReturnTrue',toField='set_load',toNode='TestInline'),
    ROUTE(fromField='isActive',fromNode='UnLoadTrigger',toField='set_value',toNode='ReturnFalse'),
    ROUTE(fromField='value_changed',fromNode='ReturnFalse',toField='set_load',toNode='TestInline')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for A3_GeoInline.py")
