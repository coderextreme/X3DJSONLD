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
    meta(content='MissileExplosionPrototype.x3d',name='title'),
    meta(content='Simple prototype for an Anti-Ship Missile (ASM) explosion.',name='description'),
    meta(content='James Harney',name='creator'),
    meta(content='25 August 2001',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='http://www.planetnine.com',name='reference'),
    meta(content='https://savage.nps.edu/Savage/CruiserUnitedStates/Cruiser.x3d',name='reference'),
    meta(content='www.specialoperations.com/multimedia/sounds.html/exp03.au',name='reference'),
    meta(content='See url "soundpermissions.html" for copyright info and use on missile1.au and exp03.au that are converted to missile1.wav and exp03.wav for use in this file/model',name='reference'),
    meta(content='soundpermissions.html',name='accessRights'),
    meta(content='explosion.png',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Weapons/Missiles/MissileExplosionPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='ASMEXPLOSION',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',name='STARTEXPLOSION',type='SFBool'),
        field(accessType='inputOnly',name='THETIME',type='SFTime')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='EXPLOSION',scale=(.05,.05,.05),
          children=[
          Shape(
            geometry=Sphere(DEF='EXPSHAPE',radius=25),
            appearance=Appearance(
              #  explosion.png is from the Pearl Harbor scene from www.planetnine.com. 
              texture=ImageTexture(DEF='explosion',url=["explosion.png","https://savage.nps.edu/Savage/Weapons/Missiles/explosion.png"]))),
          #  Note, explosion delay is hard coded into script. Must modify if you don't want a 28 sec delay to start. 
          Script(DEF='TimeFilter',
            field=[
            field(accessType='inputOnly',name='setStart',type='SFBool'),
            field(accessType='outputOnly',name='startEventTime',type='SFTime'),
            field(accessType='inputOnly',name='InputTime',type='SFTime')],
            IS=IS(
              connect=[
              connect(nodeField='setStart',protoField='STARTEXPLOSION'),
              connect(nodeField='InputTime',protoField='THETIME')])),
          #  Used with permission. See soundpermissions.html for details. 
          Sound(maxBack=50000,maxFront=50000,
            source=AudioClip(DEF='IMPACT',description='Explosion',url=["EXP03.wav","https://savage.nps.edu/Savage/Weapons/Missiles/EXP03.wav"]))]),
        TimeSensor(DEF='EXPCLOCK',cycleInterval=16),
        PositionInterpolator(DEF='EXPINTERP',key=[0,.25,.5,1],keyValue=[(1,1,1),(2.5,2.5,2.5),(3,3,3),(.01,.01,.01)]),
        ROUTE(fromField='startEventTime',fromNode='TimeFilter',toField='set_startTime',toNode='EXPCLOCK'),
        ROUTE(fromField='startEventTime',fromNode='TimeFilter',toField='set_startTime',toNode='IMPACT'),
        ROUTE(fromField='fraction_changed',fromNode='EXPCLOCK',toField='set_fraction',toNode='EXPINTERP'),
        ROUTE(fromField='value_changed',fromNode='EXPINTERP',toField='set_scale',toNode='EXPLOSION')])),
    Background(skyColor=[(0.604,0.753,0.804)]),
    Anchor(description='Multiple Explosion Example',parameter=["target=_blank"],url=["MultipleExplosionExample.wrl","../../Weapons/Missiles/MultipleExplosionExample.wrl","https://savage.nps.edu/Savage/Weapons/Missiles/MultipleExplosionExample.wrl","MultipleExplosionExample.x3d","../../Weapons/Missiles/MultipleExplosionExample.x3d","https://savage.nps.edu/Savage/Weapons/Missiles/MultipleExplosionExample.x3d"],
      children=[
      Shape(
        geometry=Text(string=["MissileExplosionPrototype","is a prototype declaration file","","To see an example scene","click on this text and view","MissileExplosionExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(),)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MissileExplosionPrototype.py")
