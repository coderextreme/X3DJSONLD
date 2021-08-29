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
    meta(content='Selcuk OZTURK',name='creator'),
    meta(content='The pilot cabin of the Zeppelin.',name='description'),
    meta(content='8 August 2002',name='created'),
    meta(content='27 November 2015',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/Cabin.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Cabin Left',position=(4,0,15)),
    Viewpoint(description='Cabin Right',orientation=(0,1,0,3.14),position=(4,0,-15)),
    Viewpoint(description='Cabin Inside',orientation=(0,1,0,1.57),position=(1,-0.7,-1.5)),
    Viewpoint(description='Cabin Inside Back',orientation=(0,1,0,1.57),position=(8.3,0.1,-1.5)),
    Transform(
      #  Left Side of the Cabin 
      children=[
      Group(DEF='SIDE',
        children=[
        Shape(DEF='FIRST',
          appearance=Appearance(
            texture=ImageTexture(DEF='WOOD',url=["wood60.jpg","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/wood60.jpg"])),
          geometry=Box(size=(2,3,0.1))),
        Group(DEF='PATCH',
          children=[
          Transform(translation=(1.5,1,0),
            children=[
            Shape(
              appearance=Appearance(
                texture=ImageTexture(USE='WOOD')),
              geometry=Box(size=(1,1,0.1)))]),
          Transform(translation=(1.5,-1,0),
            children=[
            Shape(
              appearance=Appearance(
                texture=ImageTexture(USE='WOOD')),
              geometry=Box(size=(1,1,0.1)))]),
          Transform(translation=(2.5,0,0),
            children=[
            Shape(
              appearance=Appearance(
                texture=ImageTexture(USE='WOOD')),
              geometry=Box(size=(1,3,0.1)))]),
          Transform(translation=(1.5,0,0),
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
      #  The Right Side Of The Cabin 
      Transform(DEF='RIGHT_SIDE',translation=(0,0,-3),
        children=[
        Group(USE='SIDE')]),
      #  Put a door on the left side.. 
      Transform(translation=(7.5,1.25,0),
        children=[
        Shape(
          appearance=Appearance(
            texture=ImageTexture(USE='WOOD')),
          geometry=Box(size=(1,0.5,0.1)))]),
      Transform(translation=(7.5,-0.25,0),
        children=[
        Inline(url=["Door.x3d","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/Door.x3d","Door.wrl","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/Door.wrl"])]),
      Transform(translation=(8.5,0,0),
        children=[
        Shape(
          appearance=Appearance(
            texture=ImageTexture(USE='WOOD')),
          geometry=Box(size=(1,3,0.1)))]),
      #  Fill the gap with an box because there is no door on right the side of the cabin 
      Transform(translation=(8,0,-3),
        children=[
        Shape(
          appearance=Appearance(
            texture=ImageTexture(USE='WOOD')),
          geometry=Box(size=(2,3,0.1)))]),
      #  Back side of the cabin 
      Transform(rotation=(0,1,0,1.57),translation=(8.95,0,-1.5),
        children=[
        Shape(
          appearance=Appearance(
            texture=ImageTexture(USE='WOOD')),
          geometry=Box(size=(3,3,0.1))),
        Transform(rotation=(1,0,0,1.57),translation=(0.75,0,0.75),
          children=[
          Shape(DEF='BAD',
            appearance=Appearance(
              material=Material(diffuseColor=(1,0,0))),
            geometry=Cylinder(height=1.5,radius=0.1))]),
        Transform(rotation=(1,0,0,1.57),translation=(-0.75,0,0.75),
          children=[
          Shape(USE='BAD')]),
        #  Pal.wrl should be at the same directory 
        Transform(scale=(0.1,0.1,0.1),translation=(-0.75,0,1.85),
          children=[
          Inline(DEF='Pal',url=["Pal.x3d","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/Pal.x3d","Pal.wrl","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/Pal.wrl"])]),
        Transform(scale=(0.1,0.1,0.1),translation=(0.75,0,1.85),
          children=[
          Inline(USE='Pal')])]),
      #  Floor of the cabin 
      Transform(rotation=(1,0,0,1.57),translation=(4,-1.45,-1.5),
        children=[
        Shape(
          appearance=Appearance(
            texture=ImageTexture(USE='WOOD')),
          geometry=Box(size=(10,3,0.1)))]),
      Transform(
        children=[
        Transform(rotation=(1,0,0,1.57),translation=(4,-1.44,-1.5),
          children=[
          Shape(
            appearance=Appearance(
              texture=ImageTexture(url=["floor09.jpg","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/floor09.jpg"]),
              #  Floor09.jpg should be at the same directory . It's downloaded from 3dCafe.com. 
              ),
            geometry=Box(size=(9.95,2.95,0.1)))])]),
      #  The fore of the cabin 
      Transform(rotation=(0,1,0,1.57),translation=(-0.95,0,-1.5),
        children=[
        Group(
          children=[
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.99,0.99),shininess=0.5,transparency=0.5)),
              geometry=Box(size=(1.5,1.5,0.1)))]),
          Transform(translation=(-1.125,0,0),
            children=[
            Shape(DEF='FRONT_PATCH',
              appearance=Appearance(
                texture=ImageTexture(USE='WOOD')),
              geometry=Box(size=(0.75,3,0.1)))]),
          Transform(translation=(1.125,0,0),
            children=[
            Shape(USE='FRONT_PATCH')]),
          Transform(rotation=(0,0,1,-1.57),translation=(0,1.125,0),
            children=[
            Shape(USE='FRONT_PATCH')]),
          Transform(rotation=(0,0,1,-1.57),translation=(0,-1.125,0),
            children=[
            Shape(USE='FRONT_PATCH')])])]),
      #  Chair.wrl should be at the same directory. 
      Transform(scale=(0.3,0.3,0.3),translation=(2,-1.4,0),
        children=[
        Inline(DEF='CHAIR',url=["Chair.x3d","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/Chair.x3d","Chair.wrl","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/Chair.wrl"])]),
      Transform(scale=(0.3,0.3,0.3),translation=(2,-1.4,-1.7),
        children=[
        Inline(USE='CHAIR')]),
      Transform(scale=(0.3,0.3,0.3),translation=(4,-1.4,0),
        children=[
        Inline(USE='CHAIR')]),
      Transform(scale=(0.3,0.3,0.3),translation=(4,-1.4,-1.7),
        children=[
        Inline(USE='CHAIR')]),
      Transform(scale=(0.3,0.3,0.3),translation=(6,-1.4,-1.7),
        children=[
        Inline(USE='CHAIR')]),
      Transform(scale=(0.3,0.3,0.3),translation=(8,-1.4,-1.7),
        children=[
        Inline(USE='CHAIR')]),
      Transform(scale=(0.4,0.4,0.6),translation=(-0.95,-1.4,-1.5),
        #  ControlPanel.wrl should be at the same directory. 
        children=[
        Inline(url=["ControlPanel.x3d","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/ControlPanel.x3d","ControlPanel.wrl","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/ControlPanel.wrl"])])])])
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
