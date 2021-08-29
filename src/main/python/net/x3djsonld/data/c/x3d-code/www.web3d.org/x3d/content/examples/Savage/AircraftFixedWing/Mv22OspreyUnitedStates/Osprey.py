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
    meta(content='Osprey.x3d',name='title'),
    meta(content='Osprey MV-22 medium-lift tiltrotor Very Short Take-Off and Landing (VSTOL) aircraft.',name='description'),
    meta(content='Major William C. James USMC',name='creator'),
    meta(content='23 September 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='Amended from VRML Sourcebook Figure 8.4 (used as base)',name='reference'),
    meta(content='http://www.navair.navy.mil/v22',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/v-22.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/Osprey.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  JPGs_background_from_MV4204_source_file 
    children=[
    Background(backUrl=["urn:web3d:media:textures/panoramas/ocean_3_back.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_back.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_back.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_back.jpg"],bottomUrl=["urn:web3d:media:textures/panoramas/ocean_3_bottom.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_bottom.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_bottom.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg"],frontUrl=["urn:web3d:media:textures/panoramas/ocean_3_front.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_front.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_front.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_front.jpg"],groundAngle=[0.1,1.309,1.570796],groundColor=[(0,0,0),(0,0.1,0.3),(0,0.2,0.5),(0,0.3,0.8)],leftUrl=["urn:web3d:media:textures/panoramas/ocean_3_left.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_left.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_left.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_left.jpg"],rightUrl=["urn:web3d:media:textures/panoramas/ocean_3_right.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_right.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_right.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_right.jpg"],skyAngle=[0.1,0.15,1.309,1.57079],skyColor=[(0.4,0.4,0.1),(0.4,0.4,0.1),(0,0.1,0.3),(0,0.2,0.6),(0.8,0.8,0.8)],topUrl=["urn:web3d:media:textures/panoramas/ocean_3_top.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_top.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_top.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_top.jpg"]),
    #  Viewpoint_choices 
    Viewpoint(description='MV-22 Osprey tiltrotor',position=(0,0,30)),
    Viewpoint(description='Front, angle down',orientation=(1,0,0,-0.78),position=(0,30,30)),
    Viewpoint(description='Right wing, level',orientation=(0,1,0,1.57),position=(30,0,0)),
    Viewpoint(description='Rear, level',orientation=(0,1,0,3.14),position=(0,0,-30)),
    Viewpoint(description='Left wing, level',orientation=(0,1,0,-1.57),position=(-30,0,0)),
    Viewpoint(description='Bottom, up',orientation=(1,0,0,1.57),position=(0,-30,0)),
    Viewpoint(description='Top, down',orientation=(1,0,0,-1.57),position=(0,30,0)),
    #  Rotor_Sound 
    Sound(direction=(0.7,0.7,1),location=(0,1.6,0),maxBack=30,maxFront=40,minBack=10,minFront=5,
      source=AudioClip(DEF='HELO_FLYING_AUDIO_CLIP',description='helicopter sound',loop=True,url=["Hughes500HoverInteriorMedium-cd21-no59-10sec.wav","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/Hughes500HoverInteriorMedium-cd21-no59-10sec.wav"])),
    #  Inline_Plane_Wing_System 
    Transform(translation=(0,-0.1,0),
      children=[
      Inline(url=["Wings.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/Wings.x3d","Wings.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/Wings.wrl"])]),
    #  Aircraft body 
    Transform(scale=(1,1,1.2),translation=(0,-.75,1),
      children=[
      Shape(DEF='Upper_Carraige',
        geometry=Extrusion(creaseAngle=3.14,crossSection=[(0,0),(2,0),(2,1),(-2,1),(-2,0),(0,0)],scale=[(1,0.01),(1,1),(1,1),(1,.2)],solid=False,spine=[(0,0,2),(0,0,-0.5),(0,0,-3.5),(0,0,-13)]),
        appearance=Appearance(
          material=Material(DEF='Upper_Carriage_Mat',diffuseColor=(.5,.5,.5),shininess=.5))),
      #  Inline_Fuseluge_Windows 
      Transform(rotation=(0,1,0,1.57),scale=(.6,.7,.7),translation=(1.95,-1.1,0.3),
        children=[
        Inline(DEF='Windows',url=["Windows.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/Windows.x3d","Windows.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/Windows.wrl"])]),
      Transform(rotation=(0,1,0,1.57),scale=(.6,.7,.7),translation=(1.95,-1.1,-5.0),
        children=[
        Inline(USE='Windows')]),
      Transform(rotation=(0,1,0,-1.57),scale=(.6,.7,.7),translation=(-1.95,-1.1,-5.0),
        children=[
        Inline(USE='Windows')]),
      #  Inline_Fuseluge_Door 
      Transform(rotation=(0,1,0,-1.57),scale=(.8,1.8,.7),translation=(-1.95,-2.0,1.7),
        children=[
        Inline(url=["Door.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/Door.wrl","Door.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/Door.x3d"])]),
      Shape(DEF='Lower_Carriage',
        geometry=Extrusion(DEF='Osprey_Body',creaseAngle=1.6,crossSection=[(0,0),(2,0),(2,-4),(-2,-4),(-2,0),(0,0)],scale=[(1,1),(1,1),(1,0.01)],spine=[(0,0,3.5),(0,0,-6.9),(0,0,-14.5)]),
        appearance=Appearance(
          material=Material(DEF='Lower_Carriage_Mat',diffuseColor=(.5,.5,.5),shininess=.5))),
      #  Marine Banners 
      Transform(rotation=(0,1,0,1.57),scale=(.5,.5,.5),translation=(2.02,-0.45,-11),
        children=[
        Shape(
          geometry=Text(string=["MARINES"],
            fontStyle=FontStyle(DEF='FS',family=["SANS"],justify=["BEGIN","MIDDLE"],size=1.3,style_='BOLD')),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))))]),
      Transform(rotation=(0,1,0,-1.57),scale=(.5,.5,.5),translation=(-2.02,-0.45,-13.5),
        children=[
        Shape(
          geometry=Text(string=["MARINES"],
            fontStyle=FontStyle(USE='FS')),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))))]),
      Transform(DEF='Far_Under_Carraige',scale=(1.7,1,1.5),translation=(0,-2.1,1.6),
        children=[
        Shape(
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(1,-1),(1,-.25),(.99,-.22),(.98,-.19),(.97,-.16),(.96,-.13),(.95,-.1),(.94,-.09),(.93,-.08),(.92,-.07),(.91,-.06),(.9,-.05),(.87,-.04),(.84,-.03),(.81,-.02),(.78,-.01),(.75,0),(-.75,0),(-.78,-.01),(-.81,-.02),(-.84,-.03),(-.87,-.04),(-.9,-.05),(-.91,-.06),(-.92,-.07),(-.93,-.08),(-.94,-.09),(-.95,-.1),(-.96,-.13),(-.97,-.16),(-.98,-.19),(-.99,-.22),(-1,-.25),(-1,-1.75),(-.99,-1.78),(-.98,-1.81),(-.97,-1.84),(-.96,-1.87),(-.95,-1.9),(-.94,-1.91),(-.93,-1.92),(-.92,-1.93),(-.91,-1.94),(-.9,-1.95),(-.87,-1.96),(-.84,-1.97),(-.81,-1.98),(-.78,-1.99),(-.75,-2),(.75,-2),(.78,-1.99),(.81,-1.98),(.84,-1.97),(.87,-1.96),(.9,-1.95),(.91,-1.94),(.92,-1.93),(.93,-1.92),(.94,-1.91),(.95,-1.9),(.96,-1.87),(.97,-1.84),(.98,-1.81),(.99,-1.78),(1,-1.75),(1,-1)],scale=[(0.01,.8),(.6,.85),(1.1,.9),(1.5,.95),(1.8,1),(2,1),(2,1),(2,1),(1.9,1),(1.8,.8),(1.6,.6),(1.3,.4),(1,.3),(.8,.2),(.4,.1),(0.01,0.01)],solid=False,spine=[(0,0,0),(0,0,-.2),(0,0,-.4),(0,0,-.7),(0,0,-1),(0,0,-1.3),(0,0,-4),(0,0,-5),(0,0,-5.5),(0,0,-6),(0,0,-6.5),(0,0,-7),(0,0,-7.2),(0,0,-7.4),(0,0,-7.6),(0,0,-7.7)]),
          appearance=Appearance(
            material=Material(DEF='body2',diffuseColor=(.5,.5,.5),shininess=.5)))]),
      Transform(DEF='Upper_Carriage_Rear',translation=(0,0,-13),
        children=[
        Shape(DEF='Upper_Carraige_Rear',
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(0,0),(2,0),(2,1),(-2,1),(-2,0),(0,0)],scale=[(1,.2),(1,.5)],solid=False,spine=[(0,0,0),(0,0,-1.5)]),
          appearance=Appearance(
            material=Material(DEF='Upper_Carriage_Mat_Rear',diffuseColor=(.5,.5,.5),shininess=.5)))]),
      Transform(DEF='Osprey_CockPit',translation=(0,-3.2,3.5),
        children=[
        Shape(
          geometry=Extrusion(DEF='Cockpit',creaseAngle=1.6,crossSection=[(0,.8),(2,.8),(2,-3.2),(-2,-3.2),(-2,.8),(0,.8)],scale=[(1,1),(.7,.65),(.65,.6),(.6,.5),(.5,.4),(.3,.3),(0.01,0.01)],spine=[(0,0,0),(0,0,1.5),(0,0,1.7),(0,0,1.9),(0,0,2.1),(0,0,2.3),(0,0,2.4)]),
          appearance=Appearance(
            material=Material(diffuseColor=(.5,.5,.5),shininess=.5)))]),
      Transform(DEF='Osprey_CockPit_Nose',rotation=(1,0,0,-.05),scale=(1.4,1,1.5),translation=(0,-2.5,5.3),
        children=[
        Shape(
          geometry=Sphere(),
          appearance=Appearance(
            material=Material(diffuseColor=(.5,.5,.5),shininess=.5)))]),
      #  Inline_Refueling_Boom 
      Transform(translation=(-1.2,-2.7,7),
        children=[
        Inline(url=["RefuelingBoom.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/RefuelingBoom.x3d","RefuelingBoom.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/RefuelingBoom.wrl"])]),
      #  Inline_Cockpit_Windows 
      Transform(scale=(.9,1,1),translation=(0,0,3.6),
        children=[
        Inline(url=["CockpitWindows.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/CockpitWindows.x3d","CockpitWindows.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/CockpitWindows.wrl"])])]),
    #  Inline_Plane_Tail 
    Transform(DEF='AircraftTail',translation=(0,-0.5,-16.4),
      children=[
      Inline(url=["TailSection.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/TailSection.x3d","TailSection.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/TailSection.wrl"])]),
    #  Inline_Landing_Gear 
    Transform(
      children=[
      Inline(url=["LandingGear.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/LandingGear.x3d","LandingGear.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/LandingGear.wrl"])]),
    #  Inline_Rear_Hatch 
    Transform(rotation=(1,0,0,-0.045),
      children=[
      Transform(translation=(0,0.72,-2.3),
        children=[
        Inline(url=["RearHatch.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/RearHatch.x3d","RearHatch.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/RearHatch.wrl"])])]),
    #  Inline_Coordinate_Scale 
    Transform(scale=(.1,.1,.2),
      children=[
      Inline(DEF='CoordinateAxes',url=["../../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Osprey.py")
