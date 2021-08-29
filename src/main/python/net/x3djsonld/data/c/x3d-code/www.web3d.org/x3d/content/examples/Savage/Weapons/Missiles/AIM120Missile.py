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
    meta(content='AIM120Missile.x3d',name='title'),
    meta(content='Static model with mounting device, Hughes / Raytheon AIM-120 "AMRAAM"',name='description'),
    meta(content='26 July 2004',name='created'),
    meta(content='11 April 2009',name='modified'),
    meta(content='Major Axel Weber',name='creator'),
    meta(content='https://savage.nps.edu/Savage/Weapons/Missiles/AIM120Missile.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(DEF='DefaultView',description='AIM-120 Missile',position=(0,0,30)),
    Viewpoint(description='AIM-120 Missile from behind',orientation=(0,1,0,-1.57),position=(-40,4,0)),
    #  Missile with middle and back rudder 
    Transform(DEF='Missile_Complete',rotation=(0,0,1,-1.571),
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
                    material=Material(DEF='MetalWhite',shininess=0.300,specularColor=(1,1,1))),
                  geometry=Extrusion(creaseAngle=0.524,crossSection=[(0,-2),(.5,-2),(.8,-2),(1,-2),(1,-1),(1,0),(.99101,.40312),(.97422,.98262),(.89863,1.25136),(.80625,1.41933),(.58918,1.6149),(.32165,1.7338),(.00954,1.77839)],orientation=[(-1,0,0,1.571),(-.973,-.162,-.162,1.598),(-.9,-.309,-.309,1.676),(-.794,-.43,-.43,1.799),(-.672,-.523,-.523,1.958),(-.546,-.593,-.593,2.143),(-.419,-.642,-.642,2.347),(-.296,-.675,-.675,2.566),(-.176,-.696,-.696,2.793),(-.058,-.706,-.706,3.025),(-.058,.706,.706,3.025),(-.176,.696,.696,2.793),(-.296,.675,.675,2.566),(-.419,.642,.642,2.347),(-.546,.593,.593,2.143),(-.672,.523,.523,1.958),(-.794,.43,.43,1.799),(-.9,.309,.309,1.676),(-.973,.162,.162,1.598),(-1,0,0,1.571)],solid=False,spine=[(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0)]))])])]),
          Transform(DEF='BackWings',rotation=(0,1,0,0.7),translation=(0,-17,0),
            children=[
            Group(DEF='Wings_Back',
              children=[
              Transform(DEF='WingCone',scale=(2,3,.2),
                children=[
                Shape(DEF='Cone',
                  appearance=Appearance(
                    material=Material(USE='MetalWhite')),
                  geometry=Cone(bottomRadius=2.500,height=2.))]),
              Transform(DEF='WingCone2',rotation=(0,1,0,1.571),scale=(2,3,.2),
                children=[
                Shape(DEF='Cone2',
                  appearance=Appearance(
                    material=Material(USE='MetalWhite')),
                  geometry=Cone(bottomRadius=2.500,height=2.))])])]),
          Transform(DEF='FrontWings',rotation=(0,1,0,0.7),translation=(0,-5,0),
            children=[
            Group(DEF='Wings_Front',
              children=[
              Transform(DEF='WingCone3',scale=(2,3,.2),
                children=[
                Shape(DEF='Cone3',
                  appearance=Appearance(
                    material=Material(USE='MetalWhite')),
                  geometry=Cone(bottomRadius=2.500,height=2.))]),
              Transform(DEF='WingCone4',rotation=(0,1,0,1.571),scale=(2,3,.2),
                children=[
                Shape(DEF='Cone4',
                  appearance=Appearance(
                    material=Material(USE='MetalWhite')),
                  geometry=Cone(bottomRadius=2.500,height=2.))])])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AIM120Missile.py")
