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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='DraggingSphere.x3d',name='title'),
    meta(content='A sphere that drags its tail around a box in the XY-plane',name='description'),
    meta(content='Matthew Braun',name='creator'),
    meta(content='24 July 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Copyright (c) Matthew Braun, 2001',name='rights'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/DraggingSphere.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  The scene is composed of two spheres and one cylinder. The spheres move in a box in the xy-plane. The cylinder moves in the same box, and expands and rotates to give the appearance of stretching between the spheres. 
    children=[
    WorldInfo(title='DraggingSphere.x3d'),
    Group(
      children=[
      Viewpoint(description='Start',position=(-2,2,7)),
      #  The leading sphere 
      Transform(DEF='SPHERETF1',
        children=[
        Shape(DEF='SPHERE',
          appearance=Appearance(
            material=Material(DEF='SPH_MAT',ambientIntensity=0.9,diffuseColor=(.0,.0,.0))),
          geometry=Sphere(radius=0.5))]),
      #  Trailing sphere 
      Transform(DEF='SPHERETF2',
        children=[
        Shape(USE='SPHERE')]),
      Transform(DEF='CYL_TF',rotation=(0,0,-1,1.571),scale=(1,2,1),translation=(-1,0,0),
        children=[
        Shape(DEF='CYLSHAPE',
          appearance=Appearance(
            material=Material(USE='SPH_MAT')),
          geometry=Cylinder(radius=0.50))])]),
    #  ColorInt for diffuse and emissive color 
    ColorInterpolator(DEF='ColorINT',key=[0,.25,.50,.75,1.0],keyValue=[(0.8,0.8,0.8),(0.1,0.1,0.9),(0.1,0.9,0.1),(0.9,0.1,0.1),(0.8,0.8,0.8)]),
    #  PosInt for the first sphere: a square in the XY-plane. 
    PositionInterpolator(DEF='POSINT1',key=[0,0.08,0.16,0.25,0.33,0.41,0.50,0.58,0.66,0.75,0.83,0.91,1.0],keyValue=[(0.0,0.0,0.0),(-2.0,0.0,0.0),(-4.0,0.0,0.0),(-4.0,0.0,0.0),(-4.0,2.0,0.0),(-4.0,4.0,0.0),(-4.0,4.0,0.0),(-2.0,4.0,0.0),(0.0,4.0,0.0),(0.0,4.0,0.0),(0.0,2.0,0.0),(0.0,0.0,0.0),(0.0,0.0,0.0)]),
    #  PosInt for second Sphere:a square in the XY-plane. 
    PositionInterpolator(DEF='POSINT2',key=[0,0.08,0.16,0.25,0.33,0.41,0.50,0.58,0.66,0.75,0.83,0.91,1.0],keyValue=[(0.0,0.0,0.0),(0.0,0.0,0.0),(-2.0,0.0,0.0),(-4.0,0.0,0.0),(-4.0,0.0,0.0),(-4.0,2.0,0.0),(-4.0,4.0,0.0),(-4.0,4.0,0.0),(-2.0,4.0,0.0),(0.0,4.0,0.0),(0.0,4.0,0.0),(0.0,2.0,0.0),(0.0,0.0,0.0)]),
    #  PosInt for the Cylinder: a square in the XY-plane. 
    PositionInterpolator(DEF='POSINT3',key=[0,0.08,0.16,0.25,0.33,0.41,0.50,0.58,0.66,0.75,0.83,0.91,1.0],keyValue=[(0.0,0.0,0.0),(-1.0,0.0,0.0),(-3.0,0.0,0.0),(-4.0,0.0,0.0),(-4.0,1.0,0.0),(-4.0,3.0,0.0),(-4.0,4.0,0.0),(-3.0,4.0,0.0),(-1.0,4.0,0.0),(0.0,4.0,0.0),(0.0,3.0,0.0),(0.0,1.0,0.0),(0.0,0.0,0.0)]),
    #  OrientationINT for the Cylinder. 
    OrientationInterpolator(DEF='OrientINT',key=[0.00,0.25,0.25,0.50,0.50,0.75,0.75,1.00],keyValue=[(0,0,1,1.57),(0,0,1,1.57),(0,0,0,0),(0,0,0,0),(0,0,1,1.57),(0,0,1,1.57),(0,0,0,0),(0,0,0,0)]),
    #  ScalarInt for cylinder height. 
    PositionInterpolator(DEF='ScalarInt',key=[0,0.08,0.16,0.25,0.33,0.41,0.50,0.58,0.66,0.75,0.83,0.91,1.0],keyValue=[(1,0,1),(1,1,1),(1,1,1),(1,0,1),(1,1,1),(1,1,1),(1,0,1),(1,1,1),(1,1,1),(1,0,1),(1,1,1),(1,1,1),(1,0,1)]),
    #  World clock for all objects. 
    TimeSensor(DEF='CLOCK1',cycleInterval=6,loop=True),
    #  Routes from clock to first sphere 
    ROUTE(fromField='fraction_changed',fromNode='CLOCK1',toField='set_fraction',toNode='POSINT1'),
    ROUTE(fromField='value_changed',fromNode='POSINT1',toField='set_translation',toNode='SPHERETF1'),
    #  Routes from clock to second sphere 
    ROUTE(fromField='fraction_changed',fromNode='CLOCK1',toField='set_fraction',toNode='POSINT2'),
    ROUTE(fromField='value_changed',fromNode='POSINT2',toField='set_translation',toNode='SPHERETF2'),
    #  Routes from clock to first sphere 
    ROUTE(fromField='fraction_changed',fromNode='CLOCK1',toField='set_fraction',toNode='ColorINT'),
    ROUTE(fromField='value_changed',fromNode='ColorINT',toField='set_diffuseColor',toNode='SPH_MAT'),
    ROUTE(fromField='value_changed',fromNode='ColorINT',toField='set_emissiveColor',toNode='SPH_MAT'),
    #  Routes for Cylinder movement 
    ROUTE(fromField='fraction_changed',fromNode='CLOCK1',toField='set_fraction',toNode='POSINT3'),
    ROUTE(fromField='value_changed',fromNode='POSINT3',toField='set_translation',toNode='CYL_TF'),
    #  Routes for Cylinder rotation 
    ROUTE(fromField='fraction_changed',fromNode='CLOCK1',toField='set_fraction',toNode='OrientINT'),
    ROUTE(fromField='value_changed',fromNode='OrientINT',toField='set_rotation',toNode='CYL_TF'),
    #  Routes for Cylinder stretching 
    ROUTE(fromField='fraction_changed',fromNode='CLOCK1',toField='set_fraction',toNode='ScalarInt'),
    ROUTE(fromField='value_changed',fromNode='ScalarInt',toField='set_scale',toNode='CYL_TF')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for DraggingSphere.py")
