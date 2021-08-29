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
    meta(content='Hull.x3d',name='title'),
    meta(content='ArleighBurke hull with all other components of the ship included.',name='description'),
    meta(content='James Harney',name='creator'),
    meta(content='1 August 2001',name='created'),
    meta(content='1 September 2015',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/ddg-51.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/CruiserUnitedStates/Cruiser.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/TRC170/TRC170-Body.x3d',name='reference'),
    meta(content='http://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter18-TextureMapping/Figure18.23bTextureCoordinateGrillwork.x3d',name='reference'),
    meta(content='grillwork.png',name='reference'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/Hull.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(),
    Transform(rotation=(0,1,0,-1.57),
      children=[
      Transform(
        children=[
        Viewpoint(description='DDG STBD view',orientation=(0,1,0,1.57),position=(300,40,-50)),
        Viewpoint(DEF='FRONT',description='DDG Front View',orientation=(0,1,0,3.14),position=(0,20,-300)),
        Viewpoint(DEF='PORT',description='DDG PORT view',orientation=(0,1,0,-1.57),position=(-300,40,-50)),
        Viewpoint(DEF='BEHIND',description='DDG Behind, above water',position=(-10,10,75)),
        Viewpoint(DEF='BELOWWATER',description='DDG Below The Water',position=(0,-20,75))]),
      Transform(translation=(0,-10,0),
        children=[
        Group(DEF='HULLSTRUCTURE',
          children=[
          Group(DEF='BOTTOMHULL',
            children=[
            Transform(
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(DEF='REDHULL',diffuseColor=(.2,0,0),emissiveColor=(.2,0,0))),
                geometry=Extrusion(creaseAngle=.85,crossSection=[(-6,0),(6,0),(4.5,-5.4),(2.5,-5.85),(0,-6.3),(-2.5,-5.85),(-4.5,-5.4),(-6,0)],scale=[(1,.1),(1.3,1),(1.7,1),(1.7,1),(1.3,1),(1,.7),(.4,.1)],spine=[(0,0,0),(0,0,-23.92),(0,0,-71.76),(0,0,-95.68),(0,0,-119.6),(0,0,-129),(0,0,-142)]))])])]),
        Group(DEF='BLACKHULL',
          children=[
          Transform(translation=(0,1.5,0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='BLACK',diffuseColor=(0,0,0))),
              geometry=Extrusion(creaseAngle=.85,crossSection=[(-6.5,0.0),(6.5,0.0),(6.2,-.7),(6,-1.45),(-6,-1.45),(-6.2,-.3),(-6.5,0.0)],scale=[(1,.2),(1,.5),(1,1),(1.3,1),(1.7,1),(1.7,1),(1.3,1),(1,1),(.5,1),(.4,.1)],spine=[(0,0,2),(0,0,1),(0,0,0),(0,0,-23.92),(0,0,-71.76),(0,0,-95.68),(0,0,-119.6),(0,0,-129),(0,0,-142),(0,0,-145)]))])]),
        Group(DEF='GREYHULL',
          children=[
          Transform(
            children=[
            Transform(translation=(0,5.45,0),
              children=[
              Shape(
                appearance=Appearance(DEF='HAZEGREY',
                  material=Material(diffuseColor=(.7,.7,.7),shininess=.3)),
                geometry=Extrusion(creaseAngle=.85,crossSection=[(7.5,0),(7,-2.8),(6.5,-3.95),(-6.5,-3.95),(-7,-2.8),(-7.5,0)],scale=[(1,.2),(1,.5),(1,1),(1.25,1)],spine=[(0,0,4),(0,0,3),(0,0,2),(0,0,-24.1)]))])])]),
        Group(DEF='PROPS',
          children=[
          Transform(scale=(1.1,1.1,1.1),translation=(2,-4,-5),
            children=[
            Inline(url=["Propellers.wrl","Propellers.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/Propellers.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/Propellers.x3d"])])]),
        Group(DEF='MAINDECKHULL',
          children=[
          Transform(translation=(0,12,0),
            children=[
            Shape(
              appearance=Appearance(USE='HAZEGREY'),
              geometry=Extrusion(creaseAngle=.85,crossSection=[(9,0),(8,-3.5),(6.5,-10.45),(-6.5,-10.45),(-8,-3.5),(-9,0)],scale=[(1.3,1),(1.7,1),(1.7,1),(1.3,1),(.5,1),(.4,1),(.05,.1)],spine=[(0,0,-23.92),(0,0,-71.76),(0,0,-95.68),(0,0,-119.6),(0,0,-142),(0,0,-145),(0,0,-155.8)]))])]),
        Group(DEF='MAINDECKNONSKID',
          children=[
          Transform(translation=(0,12,0),
            children=[
            Shape(
              appearance=Appearance(
                texture=ImageTexture(DEF='NONSKID',url=["nonskid.jpg","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/nonskid.jpg"])),
              geometry=Extrusion(creaseAngle=.85,crossSection=[(9,0),(-9,0),(-9,.5),(9,.5),(9,0)],scale=[(1.3,1),(1.7,1)],spine=[(0,0,-23.92),(0,0,-71.76)])),
            Shape(
              appearance=Appearance(
                texture=ImageTexture(USE='NONSKID')),
              geometry=Extrusion(creaseAngle=.85,crossSection=[(9,0),(-9,0),(-9,.5),(9,.5),(9,0)],scale=[(.5,1),(.4,1),(.05,.1)],spine=[(0,0,-142.01),(0,0,-145),(0,0,-155.8)])),
            Shape(
              appearance=Appearance(
                texture=ImageTexture(USE='NONSKID')),
              geometry=Extrusion(creaseAngle=.85,crossSection=[(9,0),(-9,0),(-9,.5),(9,.5),(9,0)],scale=[(1.7,1),(1.7,1),(1.3,1)],spine=[(0,0,-71.77),(0,0,-95.68),(0,0,-119.6)])),
            Shape(
              geometry=IndexedFaceSet(coordIndex=[0,1,3,2,0,-1,2,3,7,6,2,-1,4,5,7,6,4,-1,0,1,5,4,0,-1,1,5,3,7,1,-1,0,4,6,2,0,-1],solid=False,
                coord=Coordinate(point=[(-11.7,0,-119.6),(11.7,0,-119.6),(-11.7,0.49,-119.6),(11.7,0.49,-119.6),(-4.5,0,-142),(4.5,0,-142),(-4.5,0.49,-142),(4.5,0.49,-142)])),
              appearance=Appearance(
                texture=ImageTexture(USE='NONSKID'))),
            Shape(
              geometry=IndexedFaceSet(coordIndex=[2,3,7,6],solid=False,texCoordIndex=[0,1,2,3],
                coord=Coordinate(point=[(-5.7,0,-126.6),(5.7,0,-126.6),(-5.7,0.5,-126.6),(5.7,0.5,-126.6),(-5.7,0,-136),(5.7,0,-136),(-5.7,0.5,-136),(5.7,0.5,-136)]),
                texCoord=TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1)])),
              appearance=Appearance(
                texture=ImageTexture(url=["forwardvertrep.jpg","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/forwardvertrep.jpg"])))])]),
        Group(DEF='THREEGTG',
          children=[
          Transform(translation=(-3,12,0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(.7,.7,.7))),
              geometry=Extrusion(creaseAngle=.85,crossSection=[(4,-1),(4.75,-5.5),(-2.75,-5.5),(-2,-1),(4,-1)],scale=[(1,1.36),(1,1.36)],spine=[(0,0,-19.14),(0,0,-23.92)])),
            #  3GTG stack 
            Transform(DEF='STACK',
              children=[
              Transform(translation=(1,-1,-21.4),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(DEF='STACKCOLOR',diffuseColor=(.3,.3,.3))),
                  geometry=Cylinder(bottom=False,height=1.2,radius=1.3))]),
              Transform(translation=(1,0,-21.4),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(USE='STACKCOLOR')),
                  geometry=Cylinder(bottom=False,height=1.2,radius=1.5))]),
              Transform(translation=(1,.2,-21.4),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(USE='STACKCOLOR')),
                  geometry=Cylinder(bottom=False,height=1.2,radius=1.7))])])])])]),
      #  Flight deck nets netting from VRML 2.0 source book as cited in the header of the file. If over 8000 meters from flight deck do not draw it 
      LOD(range=[8000],
        children=[
        Transform(
          children=[
          Inline(url=["FlightDeck.wrl","FlightDeck.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/FlightDeck.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/FlightDeck.x3d"])]),
        Transform(),]),
      #  Gun is based on Cruiser model from Savage. Scale had to be modified to fit on the model here. 
      LOD(range=[8000],
        children=[
        Transform(scale=(.7,.7,.7),translation=(0,.75,-41),
          children=[
          Inline(url=["Gun.wrl","Gun.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/Gun.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/Gun.x3d"])]),
        Transform(),]),
      Transform(translation=(0,0,1),
        children=[
        Group(DEF='AFTDECKHOUSE',
          children=[
          Shape(
            appearance=Appearance(DEF='TOPGREY',
              material=Material(diffuseColor=(.7,.7,.7),shininess=.3)),
            geometry=Extrusion(creaseAngle=.85,crossSection=[(-7.7,0),(-5,10.45),(5,10.45),(7.7,0),(-7.7,0)],scale=[(1,1),(1.3,1),(1.3,1),(1,1)],solid=False,spine=[(0,0,-44.6),(0,0,-49.60),(0,0,-60.9),(0,0,-65.9)])),
          Transform(DEF='AFTSTACKBOTTOM',
            children=[
            Shape(
              appearance=Appearance(USE='TOPGREY'),
              geometry=Extrusion(creaseAngle=.85,crossSection=[(-2.5,10.45),(-1.5,15.45),(1.5,15.45),(2.5,10.45),(-2.5,10.45)],scale=[(1.3,.5),(1.3,1),(1.3,1),(1.3,.1)],solid=False,spine=[(0,0,-46.60),(0,0,-49),(0,0,-63.9),(0,0,-65.9)]))]),
          Transform(DEF='AFTSTACKTOP',
            children=[
            Shape(
              appearance=Appearance(USE='TOPGREY'),
              geometry=Extrusion(creaseAngle=.85,crossSection=[(-1.5,15.45),(-1,20.45),(1,20.45),(1.5,15.45),(-1.5,15.45)],scale=[(1.3,.5),(1.3,1),(1.3,1)],solid=False,spine=[(0,0,-52.60),(0,0,-55),(0,0,-63.9)]))]),
          Transform(
            children=[
            Shape(
              appearance=Appearance(USE='TOPGREY'),
              geometry=Extrusion(creaseAngle=.85,crossSection=[(-1,20.45),(-1,22.45),(1,22.45),(1,20.45),(-1,20.45)],scale=[(1.3,1),(1.3,1)],solid=False,spine=[(0,0,-58),(0,0,-63.9)]))]),
          #  Directors based on TRC-170 model from Savage. 
          LOD(range=[450],
            children=[
            Group(DEF='AFTDIRECTORS',
              children=[
              Transform(translation=(0,17,-50),
                children=[
                Inline(DEF='DIRECTOR',url=["MissileDirector.wrl","MissileDirector.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/MissileDirector.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/MissileDirector.x3d"])]),
              Transform(translation=(0,22,-56),
                children=[
                Inline(USE='DIRECTOR')])]),
            Transform(),]),
          Transform(scale=(.75,.75,.75),translation=(-.9,23.45,-46),
            children=[
            Transform(USE='STACK')]),
          Transform(scale=(.75,.75,.75),translation=(-.9,23.45,-43.1),
            children=[
            Transform(USE='STACK')])])]),
      Transform(
        children=[
        Transform(
          children=[
          Group(DEF='FWDDECKHOUSE',
            children=[
            Transform(
              children=[
              Shape(
                appearance=Appearance(USE='TOPGREY'),
                geometry=Extrusion(creaseAngle=.85,crossSection=[(-7.7,0),(-5,10.45),(5,10.45),(7.7,0),(-7.7,0)],scale=[(1,1),(1.3,1),(1.3,1),(1,.1)],solid=False,spine=[(0,0,-70.9),(0,0,-77.9),(0,0,-103.9),(0,0,-107.1)]))]),
            Transform(DEF='STBDOVERHNG',
              children=[
              Shape(
                appearance=Appearance(USE='TOPGREY'),
                geometry=Extrusion(beginCap=False,creaseAngle=.85,crossSection=[(-9,2),(-7,10.45),(7,10.45),(9,2)],scale=[(1.76,1),(1.71,1),(.9,.1)],solid=False,spine=[(0,0,-77.9),(0,0,-103.9),(0,0,-106.9)]))]),
            Transform(DEF='FWDSTACK',
              children=[
              Shape(
                appearance=Appearance(USE='TOPGREY'),
                geometry=Extrusion(creaseAngle=.85,crossSection=[(-2.5,10.45),(-1.5,20.45),(1.5,20.45),(2.5,10.45),(-2.5,10.45)],scale=[(1.3,.1),(1.3,1),(1.3,1),(1.3,1)],solid=False,spine=[(0,0,-70.9),(0,0,-71.9),(0,0,-77.9),(0,0,-82.9)])),
              Transform(scale=(.85,.85,.85),translation=(-.9,21.45,-56.5),
                children=[
                Transform(USE='STACK')]),
              Transform(scale=(.85,.85,.85),translation=(-.9,21.45,-60),
                children=[
                Transform(USE='STACK')])]),
            Transform(DEF='FWDLEVEL1',
              children=[
              Shape(
                appearance=Appearance(USE='TOPGREY'),
                geometry=Extrusion(creaseAngle=.85,crossSection=[(-9,10.45),(-8,13.45),(8,13.45),(9,10.45),(-9,10.45)],scale=[(1.37,1),(1.34,1),(1,1),(1,.1)],solid=False,spine=[(0,0,-79.9),(0,0,-93.9),(0,0,-100),(0,0,-103.9)]))]),
            Transform(DEF='MAST',
              children=[
              Shape(
                appearance=Appearance(USE='TOPGREY'),
                geometry=Extrusion(creaseAngle=1.6,crossSection=[(-.5,-.5),(-.5,.5),(.5,.5),(.5,-.5),(-.5,-.5)],scale=[(1.37,1),(1.34,1)],solid=False,spine=[(0,22.35,-93),(0,39.27,-86.1)])),
              Transform(DEF='UPPERYARD',translation=(0,35.3,-87.5),
                children=[
                Shape(
                  appearance=Appearance(USE='TOPGREY'),
                  geometry=Box(size=(15.38,.5,.5)))]),
              Transform(DEF='LOWERYARD',translation=(0,30.3,-89.5),
                children=[
                Shape(
                  appearance=Appearance(USE='TOPGREY'),
                  geometry=Box(size=(18.45,.5,.5)))])])]),
          Transform(DEF='FWDLEVEL2',
            children=[
            Shape(
              appearance=Appearance(USE='TOPGREY'),
              geometry=IndexedFaceSet(coordIndex=[0,1,5,9,15,14,8,4,0,-1,2,3,7,11,13,12,10,6,2,-1,0,2,3,1,0,-1,3,7,5,1,3,-1,7,11,9,5,7,-1,11,13,15,9,11,-1,12,14,15,13,12,-1,12,10,8,14,12,-1,10,6,4,8,10,-1,0,2,6,4,-1],solid=False,
                coord=Coordinate(point=[(-8,13.45,-84.9),(8,13.45,-84.9),(-7,20.45,-87.9),(7,20.45,-87.9),(-10.72,13.45,-90.9),(10.72,13.45,-90.9),(-9.38,20.45,-90.9),(9.38,20.45,-90.9),(-10.72,13.45,-93.9),(10.72,13.45,-93.9),(-9.38,20.45,-93.9),(9.38,20.45,-93.9),(-7,20.45,-99),(7,20.45,-99),(-8,13.45,-100),(8,13.45,-100)])))]),
          #  Fwd port array face 
          Transform(rotation=(.13,.99,-.07,1.01),translation=(-15.72,0,-91),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(.5,.5,.5),shininess=.3)),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,0,-1,0,6,7,1,-1,1,7,8,2,-1,2,8,9,3,-1,3,9,10,4,-1,4,10,11,5,-1,5,11,6,0,-1,6,7,8,9,10,11,6,-1],solid=False,
                coord=Coordinate(point=[(7.1,19.1,0),(8.6,20.1,0),(10.1,19.1,0),(10.1,16.1,0),(8.6,15.1,0),(7.1,16.1,0),(7.1,19.1,.3),(8.6,20.1,.3),(10.1,19.1,.3),(10.1,16.1,.3),(8.6,15.1,.3),(7.1,16.1,.3)])))]),
          #  Fwd stbd array face 
          Transform(rotation=(.13,-.99,.07,1.01),translation=(6.6,0,-105.3),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(.5,.5,.5),shininess=.3)),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,0,-1,0,6,7,1,-1,1,7,8,2,-1,2,8,9,3,-1,3,9,10,4,-1,4,10,11,5,-1,5,11,6,0,-1,6,7,8,9,10,11,6,-1],solid=False,
                coord=Coordinate(point=[(7.1,19.1,0),(8.6,20.1,0),(10.1,19.1,0),(10.1,16.1,0),(8.6,15.1,0),(7.1,16.1,0),(7.1,19.1,.3),(8.6,20.1,.3),(10.1,19.1,.3),(10.1,16.1,.3),(8.6,15.1,.3),(7.1,16.1,.3)])))]),
          #  Aft stbd array face 
          Transform(rotation=(-.13,.99,.03,1.01),translation=(6.12,.3,-79.75),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(.5,.5,.5),shininess=.3)),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,0,-1,0,6,7,1,-1,1,7,8,2,-1,2,8,9,3,-1,3,9,10,4,-1,4,10,11,5,-1,5,11,6,0,-1,6,7,8,9,10,11,6,-1],solid=False,
                coord=Coordinate(point=[(7.1,19.1,0),(8.6,20.1,0),(10.1,19.1,0),(10.1,16.1,0),(8.6,15.1,0),(7.1,16.1,0),(7.1,19.1,-.3),(8.6,20.1,-.3),(10.1,19.1,-.3),(10.1,16.1,-.3),(8.6,15.1,-.3),(7.1,16.1,-.3)])))]),
          Transform(rotation=(-.13,-.99,.03,1.0),translation=(-14,-.7,-93.2),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(.5,.5,.5),shininess=.3)),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,0,-1,0,6,7,1,-1,1,7,8,2,-1,2,8,9,3,-1,3,9,10,4,-1,4,10,11,5,-1,5,11,6,0,-1,6,7,8,9,10,11,6,-1],solid=False,
                coord=Coordinate(point=[(7.1,19.1,0),(8.6,20.1,0),(10.1,19.1,0),(10.1,16.1,0),(8.6,15.1,0),(7.1,16.1,0),(7.1,19.1,-.3),(8.6,20.1,-.3),(10.1,19.1,-.3),(10.1,16.1,-.3),(8.6,15.1,-.3),(7.1,16.1,-.3)])))]),
          Transform(DEF='PILOTHOUSE',
            children=[
            Shape(
              appearance=Appearance(USE='TOPGREY'),
              geometry=Extrusion(creaseAngle=1.3,crossSection=[(-7,20.45),(-6.5,22.45),(6.5,22.45),(7,20.45),(-7,20.45)],scale=[(1,1),(1.1,1),(1,1)],solid=False,spine=[(0,0,-90.9),(0,0,-93.9),(0,0,-98.5)])),
            Transform(DEF='FWDDIRECTOR',rotation=(0,1,0,3.14),translation=(0,24.4,0),
              children=[
              Transform(translation=(0,0,96),
                children=[
                Inline(USE='DIRECTOR')])])])])]),
      Transform(translation=(0,3.5,-24),
        children=[
        Inline(url=["../../Weapons/Missiles/MissileLaunch.wrl","https://savage.nps.edu/Savage/Weapons/Missiles/MissileLaunch.wrl","../../Weapons/Missiles/MissileLaunch.x3d","https://savage.nps.edu/Savage/Weapons/Missiles/MissileLaunch.x3d"])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Hull.py")
