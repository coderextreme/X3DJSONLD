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
    meta(content='Cabin.x3d',name='title'),
    meta(content='VIP and TV cabins',name='description'),
    meta(content='LT Christos Kalogrias - Hellenic Navy',name='creator'),
    meta(content='25 August 2003',name='created'),
    meta(content='12 November 2003',name='modified'),
    meta(content='http://www.fussballtempel.net/uefa/Gre/Nikos_Goumas.jpg',name='reference'),
    meta(content='http://www.wsoccer.com/stadium/greece/aek_athens/',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Buildings/SoccerStadium/Cabin.x3d',name='identifier'),
    meta(content='http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(DEF='Cabin',
      children=[
      Transform(DEF='WinSide',
        children=[
        Group(DEF='SIDE',
          children=[
          Shape(DEF='FIRST',
            appearance=Appearance(
              material=Material(),),
            geometry=Box(size=(2,3,0.1))),
          Group(DEF='PATCH',
            children=[
            Transform(translation=(1.5,1,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(),),
                geometry=Box(size=(1,1,0.1)))]),
            Transform(translation=(1.5,-1,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(),),
                geometry=Box(size=(1,1,0.1)))]),
            Transform(translation=(2.5,0,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(),),
                geometry=Box(size=(1,3,0.1)))]),
            Transform(DEF='Window',translation=(1.5,0,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.8,0.99,0.99),shininess=0.5,transparency=0.5)),
                geometry=Box(size=(1,1,0.1)))])]),
          Transform(translation=(2,0,0),
            children=[
            Group(USE='PATCH')]),
          Transform(translation=(4,0,0),
            children=[
            Group(USE='PATCH')])]),
        Transform(translation=(7,0,0),
          children=[
          Group(USE='SIDE')])]),
      Transform(DEF='BackSide',rotation=(0,1,0,1.57),translation=(14,0,-1.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Box(size=(3,3,0.1)))]),
      Transform(DEF='Floor',
        children=[
        Transform(rotation=(1,0,0,1.57),translation=(6.5,-1.44,-1.5),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Box(size=(15,2.95,0.1)))])]),
      Transform(DEF='FrontSide',translation=(-15,0,0),
        children=[
        Transform(USE='BackSide')]),
      Transform(DEF='NoWinSide',rotation=(1,0,0,1.57),translation=(0,-1.5,-1.5),
        children=[
        Transform(USE='Floor')]),
      Transform(DEF='Roof',translation=(0,2.95,0),
        children=[
        Transform(USE='Floor')]),
      Transform(translation=(6.5,-2,-1.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Box(size=(15,1,3.1)))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Cabin.py")
