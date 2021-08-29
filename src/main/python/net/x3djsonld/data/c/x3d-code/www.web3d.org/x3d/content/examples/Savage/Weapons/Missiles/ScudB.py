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
    meta(content='ScudB.x3d',name='title'),
    meta(content='SCUD-B Missile Used by Iraq, North Korea and Iran',name='description'),
    meta(content='Jeffrey D. Weekley',name='creator'),
    meta(content='6 November 2001',name='created'),
    meta(content='16 January 2014',name='modified'),
    meta(content='http://www.fas.org/nuke/guide/iran/missile/shahab-1.htm',name='reference'),
    meta(content='http://www.cdiss.org/scudnt3.htm',name='reference'),
    meta(content='http://www.cdiss.org/btablea.htm',name='reference'),
    meta(content='http://www.duxford.org/exhibits/279/',name='reference'),
    meta(content='http://www.duxford.org/exhibits/images/iwm_soviet_maz_543p_01.jpg',name='reference'),
    meta(content='iwm_soviet_maz_543p_01.jpg',name='reference'),
    meta(content='http://www.pbs.org/wgbh/pages/frontline/gulf/weapons/scud.html',name='reference'),
    meta(content='SCUD-B Missile, aka Shahab-1, aka Tae-po Dong',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Weapons/Missiles/ScudB.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Scud B missile',position=(0,0,15)),
    Transform(
      children=[
      Transform(
        children=[
        Shape(
          geometry=Cylinder(height=8,radius=0.4425,top=False),
          appearance=Appearance(DEF='Cammi',
            material=Material(diffuseColor=(0.45,0.55,0.55)))),
        Transform(translation=(0,4.9,0),
          children=[
          Shape(
            geometry=Cone(bottomRadius=0.4425,height=1.8),
            appearance=Appearance(USE='Cammi'))]),
        Transform(translation=(0,-4.1,0),
          children=[
          Shape(
            geometry=Cone(bottomRadius=0.2,height=0.66),
            appearance=Appearance(
              material=Material(diffuseColor=(0.15,0.15,0.15),shininess=0.66,specularColor=(0.22,0.22,0.22))))]),
        Transform(DEF='TailFin',translation=(0.175,-4.5,0),
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,-1],solid=False,
              coord=Coordinate(point=[(0,0.4,0),(0.25,0,0),(0.75,0,0),(0.75,1,0),(0,1.65,0),(0,0.4,0)])),
            appearance=Appearance(USE='Cammi'))]),
        Transform(rotation=(0,1,0,1.57),
          children=[
          Transform(USE='TailFin')]),
        Transform(rotation=(0,1,0,3.14),
          children=[
          Transform(USE='TailFin')]),
        Transform(rotation=(0,1,0,-1.57),
          children=[
          Transform(USE='TailFin')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ScudB.py")
