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

newModel=X3D(profile='Interchange',version='3.2',
  head=head(
    children=[
    meta(content='Drum55Gallon.x3d',name='title'),
    meta(content='55 Gallon Drum for Pirate Skiff',name='description'),
    meta(content='Chad R Hutchins',name='creator'),
    meta(content='22 April 2011',name='translated'),
    meta(content='14 June 2011',name='modified'),
    meta(content='http://en.wikipedia.org/wiki/Drum_(container)',name='reference'),
    meta(content='Piracy',name='subject'),
    meta(content='https://savage.nps.edu/Savage/ShipsCivilian/Piracy/Drum55Gallon.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      #  Main drum cylinder 
      children=[
      Transform(
        children=[
        Shape(
          geometry=Cylinder(DEF='Drum',height=0.8509,radius=0.28575),
          appearance=Appearance(
            material=Material(DEF='Blue',diffuseColor=(0.062745,0,0.8))))]),
      #  BungHole 
      Transform(translation=(0.2,0.42775,0),
        children=[
        Shape(DEF='Bunghole',
          geometry=Cylinder(height=0.00735,radius=0.0254),
          appearance=Appearance(
            material=Material(),))]),
      #  Top Rim 
      Transform(translation=(0,.433,0),
        children=[
        Shape(DEF='Rim',
          geometry=Cylinder(height=0.017,radius=0.3,solid=False,top=False),
          appearance=Appearance(
            material=Material(USE='Blue')))]),
      #  Top Mid Protrusion 
      Transform(translation=(0,0.13,0),
        children=[
        Shape(DEF='MidProtrusions',
          geometry=Cylinder(height=0.035,radius=0.29),
          appearance=Appearance(
            material=Material(USE='Blue')))]),
      #  Top Mid Protrusion 
      Transform(translation=(0,-0.13,0),
        children=[
        Shape(USE='MidProtrusions')]),
      #  Bottom Rim 
      Transform(translation=(0,-.42,0),
        children=[
        Shape(DEF='BottomRim',
          geometry=Cylinder(height=0.017,radius=0.3,solid=False,top=False),
          appearance=Appearance(
            material=Material(USE='Blue')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Drum55Gallon.py")
