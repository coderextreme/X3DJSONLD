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
    meta(content='Type209PrevezePropeller.x3d',name='title'),
    meta(content='Propeller for Type 209 Diesel submarine',name='description'),
    meta(content='Alper SINAV',name='creator'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='1 August 2001',name='created'),
    meta(content='29 September 2002',name='translated'),
    meta(content='7 October 2002',name='modified'),
    meta(content='Type209DieselSubmarine.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Submarines/Various/Type209PrevezePropeller.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='PROPELLER',
      children=[
      Transform(rotation=(0.0,1.0,0.0,-1.57),
        children=[
        Transform(DEF='PROP1',
          children=[
          Transform(DEF='WING_1',
            children=[
            Transform(rotation=(1.0,0.0,0.0,0.6),
              children=[
              Transform(DEF='WING_POS',translation=(3.0,0.0,0.0),
                children=[
                Transform(DEF='WING_SHAPE',scale=(2.0,1.0,0.1),
                  children=[
                  Shape(
                    appearance=Appearance(DEF='WING_APP',
                      material=Material(emissiveColor=(0.0,0.1,0.1))),
                    geometry=Sphere(radius=2.0))])])])]),
          Transform(rotation=(0.0,0.0,1.0,1.04),
            children=[
            Transform(USE='WING_1')]),
          Transform(rotation=(0.0,0.0,1.0,2.09),
            children=[
            Transform(USE='WING_1')]),
          Transform(rotation=(0.0,0.0,1.0,3.14),
            children=[
            Transform(USE='WING_1')]),
          Transform(rotation=(0.0,0.0,1.0,4.19),
            children=[
            Transform(USE='WING_1')]),
          Transform(rotation=(0.0,0.0,1.0,5.23),
            children=[
            Transform(USE='WING_1')]),
          Transform(translation=(0.0,0.0,-7.0),
            children=[
            Transform(rotation=(1.0,0.0,0.0,-1.57),
              children=[
              Shape(
                appearance=Appearance(USE='WING_APP'),
                geometry=Cone(bottomRadius=2.0,height=4.0))])]),
          Transform(rotation=(1.0,0.0,0.0,1.57),
            children=[
            Shape(
              appearance=Appearance(USE='WING_APP'),
              geometry=Cylinder(height=1.4,radius=2.0))]),
          Transform(translation=(0.0,0.0,0.65),
            children=[
            Shape(
              appearance=Appearance(USE='WING_APP'),
              geometry=Sphere(radius=1.99))])]),
        TimeSensor(DEF='TIME',cycleInterval=5.0,loop=True),
        OrientationInterpolator(DEF='PATH',key=[0.0,0.5,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,-3.14),(0.0,0.0,1.0,-6.28)]),
        ROUTE(fromField='fraction_changed',fromNode='TIME',toField='set_fraction',toNode='PATH'),
        ROUTE(fromField='value_changed',fromNode='PATH',toField='set_rotation',toNode='PROP1')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Type209PrevezePropeller.py")
