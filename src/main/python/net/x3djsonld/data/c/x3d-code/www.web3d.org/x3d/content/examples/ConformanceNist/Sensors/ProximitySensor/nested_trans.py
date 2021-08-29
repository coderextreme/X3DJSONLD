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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='nested_trans.x3d',name='title'),
    meta(content='nested_trans-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test effect of nested Transforms. A ProximitySensor is "nested" in a "child" Transformation node. Therefore, it should translate appropriately with its parents Transformation parameters (-100 -100 100). Viewpoints in the root Transform node are offset by -100 -100 100, and should create orthographic (perfect 90 degree) views for all viewpoints. All inside views should appear identical. All outside views should appear identical. The Sphere geometry should turn color from red to blue for "inside" views.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/ProximitySensor/nested_trans.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='nested_trans.x3d'),
    Viewpoint(description='Outside (Front)',position=(-100,-100,110)),
    Viewpoint(description='Inside (Front)',position=(-100,-100,101.9)),
    Viewpoint(description='Outside (Rear)',orientation=(0,1,0,3.14),position=(-100,-100,90)),
    Viewpoint(description='Inside (Rear)',orientation=(0,1,0,3.14),position=(-100,-100,98.1)),
    Viewpoint(description='Outside (Top)',orientation=(1,0,0,-1.57),position=(-100,-90,100)),
    Viewpoint(description='Inside (Top)',orientation=(1,0,0,-1.57),position=(-100,-98.1,100)),
    Viewpoint(description='Outside (Bottom)',orientation=(1,0,0,1.57),position=(-100,-110,100)),
    Viewpoint(description='Inside (Bottom)',orientation=(1,0,0,1.57),position=(-100,-101.1,100)),
    Viewpoint(description='Outside (Right)',orientation=(0,1,0,1.57),position=(-90,-100,100)),
    Viewpoint(description='Inside (Right)',orientation=(0,1,0,1.57),position=(-98.1,-100,100)),
    Viewpoint(description='Outside (Left)',orientation=(0,1,0,-1.57),position=(-110,-100,100)),
    Viewpoint(description='Inside (Left)',orientation=(0,1,0,-1.57),position=(-101.9,-100,100)),
    TimeSensor(DEF='TIME',cycleInterval=2),
    ColorInterpolator(DEF='INTERP_COLOR',key=[0,0.5,1],keyValue=[(1,0,0),(0,1,0),(0,0,1)]),
    Group(
      children=[
      Transform(
        children=[
        Transform(translation=(-100,-100,100),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(DEF='COLOR',diffuseColor=(1,0,0))),
            geometry=Sphere(),),
          Transform(
            children=[
            ProximitySensor(DEF='PROX_SENSOR',size=(4,4,4)),
            Shape(
              appearance=Appearance(
                material=Material(emissiveColor=(1,1,1))),
              geometry=IndexedLineSet(coordIndex=[0,1,-1,1,2,-1,2,3,-1,3,0,-1,4,5,-1,5,6,-1,6,7,-1,7,4,-1,1,5,-1,2,6,-1,0,4,-1,7,3,-1],
                coord=Coordinate(point=[(-2,-2,-2),(2,-2,-2),(2,2,-2),(-2,2,-2),(-2,-2,2),(2,-2,2),(2,2,2),(-2,2,2)])))])])])]),
    ROUTE(fromField='enterTime',fromNode='PROX_SENSOR',toField='startTime',toNode='TIME'),
    ROUTE(fromField='fraction_changed',fromNode='TIME',toField='set_fraction',toNode='INTERP_COLOR'),
    ROUTE(fromField='value_changed',fromNode='INTERP_COLOR',toField='diffuseColor',toNode='COLOR'),
    ROUTE(fromField='exitTime',fromNode='PROX_SENSOR',toField='stopTime',toNode='TIME')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for nested_trans.py")
