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
    meta(name='title',content='flower.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/src/main/data/flower.x3d'),
    meta(name='description',content='a flower')]),
  Scene=Scene(
    children=[
    NavigationInfo(),
    DirectionalLight(direction=(0,-0.8,-0.2),intensity=0.5),
    Background(skyColor=[(1.000,1.000,1.000)]),
    Viewpoint(description='One mathematical orbital',position=(0,0,50)),
    Transform(translation=(0,-1,1),rotation=(0,1,0,3.1415926),scale=(1.5,1.5,1.5),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(transparency=0.1,diffuseColor=(0.9,0.3,0.3),specularColor=(0.8,0.8,0.8),shininess=0.145)),
        geometry=IndexedFaceSet(ccw=False,convex=False,coordIndex=[0,1,2,-1],DEF='Orbit',
          coord=Coordinate(DEF='OrbitCoordinates',point=[(0,0,1),(0,1,0),(1,0,0)])))]),
    Script(DEF='OrbitScript',
      field=[
      field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
      field(accessType='outputOnly',name='coordinates',type='MFVec3f'),
      field(accessType='outputOnly',name='coordIndexes',type='MFInt32')]
      # 
        <field accessType="inputOutput" name="e" type="SFFloat" value="5"/>
        <field accessType="inputOutput" name="f" type="SFFloat" value="5"/>
        <field accessType="inputOutput" name="g" type="SFFloat" value="5"/>
        <field accessType="inputOutput" name="h" type="SFFloat" value="5"/>
        <field accessType="inputOutput" name="t" type="SFFloat" value="0"/>
        <field accessType="inputOutput" name="p" type="SFFloat" value="0"/>
        <field accessType="inputOutput" name="resolution" type="SFInt32" value="150"/>
	
      ),
    TimeSensor(DEF='Clock',cycleInterval=16,loop=True),
    ROUTE(fromNode='OrbitScript',fromField='coordIndexes',toNode='Orbit',toField='coordIndex'),
    ROUTE(fromNode='OrbitScript',fromField='coordinates',toNode='OrbitCoordinates',toField='point'),
    ROUTE(fromNode='Clock',fromField='fraction_changed',toNode='OrbitScript',toField='set_fraction')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if         metaDiagnostics(newModel): # built-in utility method in X3D class
    print (metaDiagnostics(newModel))
print ("python x3d.py load successful for flower.py")