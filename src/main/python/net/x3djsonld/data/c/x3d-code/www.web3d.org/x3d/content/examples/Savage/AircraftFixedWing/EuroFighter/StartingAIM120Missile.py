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
    meta(content='StartingAIM120Missile.x3d',name='title'),
    meta(content='Started AMRAAM missile, rotating, with flames and steam tail plus starting sound',name='description'),
    meta(content='Hughes / Raytheon AIM-120',name='subject'),
    meta(content='28 August 2004',name='created'),
    meta(content='1 January 2014',name='modified'),
    meta(content='Major Axel Weber',name='creator'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/EuroFighter/StartingAIM120Missile.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Starting missile 
    children=[
    Transform(DEF='Missile_Complete',rotation=(0,0,1,1.571),
      children=[
      Transform(DEF='MissileBody',
        children=[
        Group(DEF='Missile',
          children=[
          Transform(DEF='Rocket',
            children=[
            Group(DEF='RocketGroup',
              children=[
              Transform(DEF='RocketBody',scale=(1,10,1),
                children=[
                Shape(DEF='Body',
                  appearance=Appearance(
                    material=Material(DEF='MetalWhite',shininess=0.3,specularColor=(1,1,1))),
                  geometry=Extrusion(creaseAngle=0.524,crossSection=[(0,-2),(.5,-2),(.8,-2),(1,-2),(1,-1),(1,0),(.99101,.40312),(.97422,.98262),(.89863,1.25136),(.80625,1.41933),(.58918,1.6149),(.32165,1.7338),(.00954,1.77839)],orientation=[(-1,0,0,1.571),(-.973,-.162,-.162,1.598),(-.9,-.309,-.309,1.676),(-.794,-.43,-.43,1.799),(-.672,-.523,-.523,1.958),(-.546,-.593,-.593,2.143),(-.419,-.642,-.642,2.347),(-.296,-.675,-.675,2.566),(-.176,-.696,-.696,2.793),(-.058,-.706,-.706,3.025),(-.058,.706,.706,3.025),(-.176,.696,.696,2.793),(-.296,.675,.675,2.566),(-.419,.642,.642,2.347),(-.546,.593,.593,2.143),(-.672,.523,.523,1.958),(-.794,.43,.43,1.799),(-.9,.309,.309,1.676),(-.973,.162,.162,1.598),(-1,0,0,1.571)],solid=False,spine=[(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0)]))])]),
            Group(DEF='SteamTail',
              children=[
              Transform(DEF='TransSteam',translation=(0,-550,0),
                children=[
                Shape(DEF='SteamLine',
                  appearance=Appearance(
                    material=Material(DEF='SteamGray',diffuseColor=(0.2,0.2,0.2),emissiveColor=(.5,.5,.5),shininess=0.5,specularColor=(.5,.5,.5),transparency=0.4),
                    texture=ImageTexture(url=["Textures/steam.jpg","../../AircraftFixedWing/EuroFighter/Textures/steam.jpg","https://savage.nps.edu/Savage/AircraftFixedWing/EuroFighter/Textures/steam.jpg"]),
                    textureTransform=TextureTransform(scale=(0.002,2.5),translation=(50,0))),
                  geometry=Cylinder(DEF='SteamCylinder',height=1000,radius=2,top=False))]),
              TimeSensor(DEF='TailClock',cycleInterval=0.2,loop=True),
              ScalarInterpolator(DEF='TRANSPARENCY_Path',key=[0,0.3,0.4,0.6,0.8,1.0],keyValue=[0,0.2,0.8,0.4,0.8,0.2])])]),
          Transform(DEF='BackWings',translation=(0,-17,0),
            children=[
            Group(DEF='Wings_Back',
              children=[
              Transform(DEF='WingCone',scale=(2,3,.2),
                children=[
                Shape(DEF='Cone',
                  appearance=Appearance(
                    material=Material(USE='MetalWhite')),
                  geometry=Cone(bottomRadius=2.5,height=2.))]),
              Transform(DEF='WingCone2',rotation=(0,1,0,1.571),scale=(2,3,.2),
                children=[
                Shape(DEF='Cone2',
                  appearance=Appearance(
                    material=Material(USE='MetalWhite')),
                  geometry=Cone(bottomRadius=2.5,height=2.))])])]),
          Transform(DEF='FrontWings',rotation=(0,1,0,1.571),translation=(0,-5,0),
            children=[
            Group(DEF='Wings_Front',
              children=[
              Transform(DEF='WingCone3',scale=(2,3,.2),
                children=[
                Shape(DEF='Cone3',
                  appearance=Appearance(
                    material=Material(USE='MetalWhite')),
                  geometry=Cone(bottomRadius=2.5,height=2.))]),
              Transform(DEF='WingCone4',rotation=(0,1,0,1.571),scale=(2,3,.2),
                children=[
                Shape(DEF='Cone4',
                  appearance=Appearance(
                    material=Material(USE='MetalWhite')),
                  geometry=Cone(bottomRadius=2.5,height=2.))])])]),
          TimeSensor(DEF='Clock',cycleInterval=4,loop=True),
          OrientationInterpolator(DEF='Rotation',key=[0,.5,1],keyValue=[(0,1,0,0),(0,1,0,3.14),(0,1,0,6.28)])]),
        ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='Rotation'),
        ROUTE(fromField='value_changed',fromNode='Rotation',toField='set_rotation',toNode='MissileBody'),
        ROUTE(fromField='fraction_changed',fromNode='TailClock',toField='set_fraction',toNode='TRANSPARENCY_Path'),
        ROUTE(fromField='value_changed',fromNode='TRANSPARENCY_Path',toField='set_transparency',toNode='SteamGray')]),
      Transform(DEF='Flames',
        children=[
        Group(DEF='FLAMES',
          children=[
          Transform(DEF='InnerFLAMES',translation=(0,-26,0),
            children=[
            Transform(scale=(1,7,1),translation=(0,-1,0),
              children=[
              Shape(DEF='Sphere_1',
                appearance=Appearance(
                  material=Material(DEF='FlameYellow',diffuseColor=(1,1,0),emissiveColor=(1,1,0),shininess=0.7,specularColor=(1,1,0),transparency=0.3)),
                geometry=Sphere(radius=1.))])]),
          Transform(DEF='OuterFlames',scale=(1.5,8,1.5),translation=(0,-29,0),
            children=[
            Shape(DEF='Sphere_2',
              appearance=Appearance(
                material=Material(DEF='Flame_Red',diffuseColor=(1,0,0),emissiveColor=(0.9,0.15,0),shininess=0.5,specularColor=(1,1,0),transparency=0.4)),
              geometry=Sphere(radius=1.3))]),
          Transform(DEF='OuterSphere',scale=(1,1.5,1),translation=(0,-35,0),
            children=[
            Shape(DEF='Sphere2',
              appearance=Appearance(
                material=Material(DEF='Blue_Sphere',diffuseColor=(.45,.60,.8),emissiveColor=(.45,.60,.8),shininess=0.,transparency=0.7)),
              geometry=Sphere(radius=10.))])])]),
      Sound(DEF='MissileSound',maxBack=250,maxFront=250,minBack=20,minFront=20,
        source=AudioClip(DEF='Sound',description='FlightSound',loop=True,url=["Sounds/MissileStart.wav","../../AircraftFixedWing/EuroFighter/Sounds/MissileStart.wav","https://savage.nps.edu/Savage/AircraftFixedWing/EuroFighter/Sounds/MissileStart.wav"]))]),
    Viewpoint(description='Default Viewpoint, Started Missile',position=(20,0,60)),
    Viewpoint(description='Down-Front View, Started Missile',orientation=(0,-1,0,1.2),position=(-45,-8,10))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for StartingAIM120Missile.py")
