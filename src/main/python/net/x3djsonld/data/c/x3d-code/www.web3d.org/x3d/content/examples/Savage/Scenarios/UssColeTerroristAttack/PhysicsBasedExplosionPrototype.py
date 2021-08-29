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
    meta(content='PhysicsBasedExplosionPrototype.x3d',name='title'),
    meta(content="A physics-based explosion model for 1/3 ton of TNT from the US Army's TNT Equivalency Model for modeling the attack on the USS COLE by Al-Qaida. Takes an input time as trigger parameter. Rings correspond to levels of damage on steel(unclass levels for representation purposes).",name='description'),
    meta(content='James Harney',name='creator'),
    meta(content='13 October 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='http://www.foia.navy.mil/usscole/index.html',name='reference'),
    meta(content='http//www.fas.org/man/dod-101/navy/docs/es310/warheads/Warheads.htm',name='reference'),
    meta(content='http//www.fas.org/man/dod-101/navy/docs/es310/dam_crit/dam_crit.htm',name='reference'),
    meta(content='http//www.eqe.com/publications/revf94/blast.htm',name='reference'),
    meta(content='http//www.siggraph.org/education/materials/HyperGraph/animation/particle.htm',name='reference'),
    meta(content='TNT Equivalency Based Explosion, VRML X3D',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/PhysicsBasedExplosionPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='Physics-based explosion model',name='TNTBasedExplosion',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',name='startExplosion',type='SFTime')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Group(
            children=[
            Transform(DEF='InnerRingTrans',
              children=[
              Transform(DEF='InnerRing',scale=(.01,.01,.01),
                children=[
                Shape(
                  geometry=Sphere(),
                  appearance=Appearance(
                    material=Material(diffuseColor=(.9333,.9333,0),shininess=1)))])]),
            Transform(DEF='MiddleRingTrans',
              children=[
              Transform(DEF='MiddleRing',scale=(.01,.01,.01),
                children=[
                Shape(
                  geometry=Sphere(),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,.2,0),shininess=1,transparency=.5)))])]),
            Transform(DEF='OuterRingTrans',
              children=[
              Transform(DEF='OuterRing',scale=(.01,.01,.01),
                children=[
                Shape(
                  geometry=Sphere(),
                  appearance=Appearance(
                    material=Material(diffuseColor=(.8,.8,.8),shininess=.2,transparency=.8)))])]),
            Sound(maxBack=50000,maxFront=50000,
              source=AudioClip(DEF='Explode',description='Explode!',url=["../../Scenarios/UssColeTerroristAttack/EXP03.wav","EXP03.wav","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/EXP03.wav"]))]),
          TimeSensor(DEF='ExplosionClock',cycleInterval=3,
            IS=IS(
              connect=[
              connect(nodeField='startTime',protoField='startExplosion')])),
          TimeSensor(DEF='OuterClock',cycleInterval=10),
          #  The explosion rings are based on the effects of approximately 1/3 ton of TNT. 
          PositionInterpolator(DEF='InnerRingInterp',key=[0,0.1,1],keyValue=[(0.01,0.01,0.01),(9.975,9.975,9.975),(0.01,0.01,0.01)]),
          PositionInterpolator(DEF='MiddleRingInterp',key=[0,0.1,1],keyValue=[(0.01,0.01,0.01),(12.635,12.635,12.635),(0.01,0.01,0.01)]),
          PositionInterpolator(DEF='OuterRingInterp',key=[0,0.2,1],keyValue=[(0.01,0.01,0.01),(13.965,13.965,13.965),(0.01,0.01,0.01)]),
          PositionInterpolator(DEF='TransInterp',key=[0,1],keyValue=[(0,0,0),(0,4,1)])]),
        ROUTE(fromField='startTime',fromNode='ExplosionClock',toField='startTime',toNode='OuterClock'),
        ROUTE(fromField='fraction_changed',fromNode='ExplosionClock',toField='set_fraction',toNode='InnerRingInterp'),
        ROUTE(fromField='fraction_changed',fromNode='ExplosionClock',toField='set_fraction',toNode='MiddleRingInterp'),
        ROUTE(fromField='fraction_changed',fromNode='OuterClock',toField='set_fraction',toNode='OuterRingInterp'),
        ROUTE(fromField='value_changed',fromNode='InnerRingInterp',toField='set_scale',toNode='InnerRing'),
        ROUTE(fromField='value_changed',fromNode='MiddleRingInterp',toField='set_scale',toNode='MiddleRing'),
        ROUTE(fromField='value_changed',fromNode='OuterRingInterp',toField='set_scale',toNode='OuterRing'),
        ROUTE(fromField='startTime',fromNode='ExplosionClock',toField='startTime',toNode='Explode'),
        ROUTE(fromField='fraction_changed',fromNode='ExplosionClock',toField='set_fraction',toNode='TransInterp'),
        ROUTE(fromField='value_changed',fromNode='TransInterp',toField='translation',toNode='InnerRingTrans'),
        ROUTE(fromField='value_changed',fromNode='TransInterp',toField='translation',toNode='MiddleRingTrans'),
        ROUTE(fromField='value_changed',fromNode='TransInterp',toField='translation',toNode='OuterRingTrans')])),
    NavigationInfo(speed=10,type=["FLY","EXAMINE","ANY"],visibilityLimit=7000),
    Background(groundAngle=[1.309],groundColor=[(0.2,0.2,0.8),(.2,.2,1.0)],skyAngle=[1.309,1.571],skyColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(1.0,1.0,1.0)]),
    Viewpoint(description='Watch the Explosion',position=(0,0,12)),
    Anchor(description='Example use',parameter=["target=_blank"],url=["PhysicsBasedExplosionExample.x3d","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/PhysicsBasedExplosionExample.x3d","PhysicsBasedExplosionExample.wrl","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/PhysicsBasedExplosionExample.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.4,0))),
        geometry=Text(string=["PhysicsBasedExplosionPrototype.x3d","is a Prototype declaration file.","","For an example scene using the node","click this text and view","PhysicsBasedExplosionExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PhysicsBasedExplosionPrototype.py")
