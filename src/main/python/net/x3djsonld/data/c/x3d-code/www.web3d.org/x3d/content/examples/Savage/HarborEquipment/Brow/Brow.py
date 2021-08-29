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
    meta(content='Brow.x3d',name='title'),
    meta(content='Standard Brow and Pier Riser',name='description'),
    meta(content='Patrick Sullivan',name='creator'),
    meta(content='12 January 2014',name='modified'),
    meta(content='24 January 2006',name='translated'),
    meta(content='29 March 2005',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Harbors/Equipment/Brow.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(DEF='brow',rotation=(0.0,0.0,1.0,0.06981237),translation=(0.373266,0.026101,-0.753776),
      children=[
      Group(
        children=[
        Transform(translation=(-2.540513,0.317431,0.38514),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=0.637709,radius=0.05353543))]),
        Transform(translation=(-1.482761,0.317431,0.38514),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=0.637709,radius=0.05353543))]),
        Transform(translation=(1.492773,0.317431,0.38514),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=0.637709,radius=0.05353543))]),
        Transform(translation=(2.502197,0.317431,0.38514),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=0.637709,radius=0.05353543))]),
        Transform(rotation=(0.0,0.0,1.0,1.570796),translation=(0.01230456,0.654208,0.392295),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=5.088418,radius=0.05))]),
        Transform(translation=(-0.007260918,0.317431,0.38514),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=0.637709,radius=0.05353543))])]),
      Group(
        children=[
        Transform(scale=(3.058552,0.860669,0.01676269),translation=(0.0,0.320405,-0.449187),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1.0,0.964703,0.858823))),
            geometry=Box(size=(1.012282,0.618035,0.890901)))])]),
      Transform(rotation=(0.0,-1.0,0.0,3.141592),translation=(-2.274716E-8,0.0,-0.01451861),
        children=[
        Group(
          children=[
          Transform(scale=(3.058552,0.860669,0.01676269),translation=(0.0,0.320405,-0.449187),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,1),emissiveColor=(1,1,1))),
              geometry=Box(size=(1.012282,0.618035,0.890901)))])])]),
      Transform(translation=(0.0,0.0,-0.767677),
        children=[
        Group(
          children=[
          Transform(translation=(-2.540513,0.317431,0.38514),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=Cylinder(height=0.637709,radius=0.05353543))]),
          Transform(translation=(-1.482761,0.317431,0.38514),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=Cylinder(height=0.637709,radius=0.05353543))]),
          Transform(translation=(1.492773,0.317431,0.38514),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=Cylinder(height=0.637709,radius=0.05353543))]),
          Transform(translation=(2.502197,0.317431,0.38514),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=Cylinder(height=0.637709,radius=0.05353543))]),
          Transform(rotation=(0.0,0.0,1.0,1.570796),translation=(0.01230456,0.654208,0.392295),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=Cylinder(height=5.088418,radius=0.05))]),
          Transform(translation=(-0.007260918,0.317431,0.38514),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=Cylinder(height=0.637709,radius=0.05353543))])])]),
      Transform(translation=(0.0,0.0,0.006139379),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Box(size=(5.1626,0.08069054,0.861002)))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Brow.py")
