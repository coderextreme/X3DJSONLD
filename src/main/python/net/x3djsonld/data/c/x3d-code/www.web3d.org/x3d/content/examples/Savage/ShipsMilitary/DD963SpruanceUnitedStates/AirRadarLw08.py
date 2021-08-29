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
    meta(content='AirRadarLw08.x3d',name='title'),
    meta(content='Copyright [2001] By George Stavritis',name='creator'),
    meta(content='20 October 2001',name='created'),
    meta(content='1 January 2019',name='modified'),
    meta(content='Josh Hansen',name='contributor'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DD963SpruanceUnitedStates/AirRadarLw08.x3d',name='identifier'),
    meta(content='Navigation radar zw06',name='description'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(backUrl=["mountns.png","http://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/mountns.png"],frontUrl=["mountns.png","http://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/mountns.png"],groundAngle=[1.309,1.570796],groundColor=[(1,1,1),(0.1,0.1,0.5),(0.4,0.25,0.2),(0.1,0.6,0.1)],leftUrl=["mountns.png","http://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/mountns.png"],rightUrl=["mountns.png","http://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/mountns.png"],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    Viewpoint(description='Air Radar',orientation=(1,0,0,0),position=(0,0,6)),
    Group(
      children=[
      Transform(DEF='Column',center=(0,0,0.5),rotation=(0,0,1,1.54),scale=(0.4,0.4,1),
        children=[
        Shape(
          geometry=Extrusion(crossSection=[(-4,-2),(-4.5,-1),(-4.5,1),(-4,2),(-3,3),(3,3),(4,2),(4.5,1),(4.5,-1),(4,-2),(3,-3),(-3,-3),(-4,-2)],scale=[(0.1,0.1),(0.7,0.7),(1,1),(0.8,0.8),(0.2,0.2)],spine=[(0,0,-0.5),(0,0,0),(0,0,0.4),(0,0,0.1),(0,0,-0.2)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0.1,0,0),emissiveColor=(0.1,0,0),shininess=.3,transparency=0.1))),
        Transform(translation=(0,-3.2,1),
          children=[
          Shape(
            geometry=Box(size=(0.5,0.3,1.5)),
            appearance=Appearance(
              material=Material(diffuseColor=(0,0,0))))]),
        Transform(rotation=(1,0,0,2),scale=(0.5,1,0.5),translation=(0,-2.8,1.5),
          children=[
          Shape(
            geometry=Cone(height=0.5),
            appearance=Appearance(
              material=Material(diffuseColor=(0,0,0))))])]),
      TimeSensor(DEF='Clock',cycleInterval=8,loop=True),
      OrientationInterpolator(DEF='ColumnPath',key=[0.0,0.25,0.50,0.75,1.0],keyValue=[(0,1,0,0),(0,1,0,1.57),(0,1,0,3.14),(0,1,0,4.71),(0,1,0,6.18)])]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='ColumnPath'),
    ROUTE(fromField='value_changed',fromNode='ColumnPath',toField='set_rotation',toNode='Column')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AirRadarLw08.py")
