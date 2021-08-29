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
    meta(content='AftSuperstructure.x3d',name='title'),
    meta(content='DDG-51 Flight IIA Arleigh Burke aft superstructure',name='description'),
    meta(content='LT Joe Sears, USN',name='creator'),
    meta(content='21 July 2003',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='http://combatindex.com/store/3d',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/ddg-51.htm',name='drawing'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/AftSuperstructure.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='SuperstructureAft',
      children=[
      Group(DEF='AFT01',
        children=[
        Transform(translation=(0,6,-45),
          children=[
          Shape(
            geometry=Extrusion(crossSection=[(-7,0),(-6,3.55),(4,3.55),(5,0),(-7,0)],orientation=[(0,0,0,0),(0,0,0,0),(1,0,0,.2)],scale=[(1.427,1),(1,1),(1,1.02)],solid=False,spine=[(0,0,0),(0,0,-2),(0,0,-27)]),
            appearance=Appearance(DEF='HazeGray',
              material=Material(specularColor=(.4,.4,.4))))]),
        Transform(DEF='Aft01AftAdjointoHanger',translation=(0,6,-45),
          children=[
          Shape(
            appearance=Appearance(USE='HazeGray'),
            geometry=Extrusion(ccw=False,crossSection=[(5,0),(4.3,3.55),(0,3.55),(0,0),(5,0)],scale=[(2,1),(1,1)],spine=[(0,0,0),(0,0,-2)]))]),
        Transform(DEF='Aft01NonSkid',translation=(0,9.58,-45),
          children=[
          Shape(
            appearance=Appearance(
              texture=ImageTexture(DEF='NONSKID',url=["nonskid.jpg","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/nonskid.jpg"])),
            geometry=Extrusion(creaseAngle=.85,crossSection=[(-6,0),(4,0),(4,-.01),(-6,-.01),(-6,0)],scale=[(1.427,1),(1,1),(1,1)],spine=[(0,0,0),(0,0,-2),(0,0,-26.3)]))]),
        Transform(DEF='Aft01AftAdjoinToHangerNonSkid',translation=(0,9.58,-45),
          children=[
          Shape(
            appearance=Appearance(
              texture=ImageTexture(USE='NONSKID')),
            geometry=Extrusion(creaseAngle=.85,crossSection=[(4.3,0),(4.3,-.01),(0,-.01),(0,0),(4.3,0)],scale=[(2,1),(1,1)],spine=[(0,0,0),(0,0,-2)]))])]),
      Group(DEF='AFT02',
        children=[
        Transform(translation=(0,9.55,-48.305),
          children=[
          Shape(
            appearance=Appearance(USE='HazeGray'),
            geometry=Extrusion(crossSection=[(-3.5,-.07),(-3.15,1.5),(3.15,1.5),(3.5,-.07),(-3.5,-.07)],orientation=[(0,0,0,0),(1,0,0,.2)],scale=[(.75,1),(1,1.02)],solid=False,spine=[(0,0,0),(0,0,-23)]))]),
        Transform(DEF='Aft02NonSkid',translation=(0,11.075,-48.3),
          children=[
          Shape(
            appearance=Appearance(
              texture=ImageTexture(USE='NONSKID')),
            geometry=Extrusion(creaseAngle=.85,crossSection=[(3.15,0),(-3.15,0),(-3.15,-.01),(3.15,-.01),(3.15,0)],scale=[(.75,1),(1,1)],spine=[(0,0,0),(0,0,-22.7)]))]),
        Transform(rotation=(1,0,0,-1.57),scale=(.75,.75,.75),translation=(3,2.75,-111),
          children=[
          Transform(
            children=[
            Transform(
              children=[
              Inline(url=["Phalanx.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/Phalanx.x3d","Phalanx.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/Phalanx.wrl"])])])])]),
      Group(DEF='AFT03',
        children=[
        Transform(translation=(0,11.05,-52),
          children=[
          Shape(
            appearance=Appearance(USE='HazeGray'),
            geometry=Extrusion(crossSection=[(-3.15,-.07),(-2.65,2.5),(2.65,2.5),(3.15,-.07),(-3.15,-.07)],orientation=[(1,0,0,-.2),(1,0,0,.2)],scale=[(.80,1),(1,1.02)],solid=False,spine=[(0,0,0),(0,0,-19)]))]),
        Transform(DEF='Aft03NonSkid',translation=(0,13.56,-52.5),
          children=[
          Shape(
            appearance=Appearance(
              texture=ImageTexture(USE='NONSKID')),
            geometry=Extrusion(creaseAngle=.85,crossSection=[(2.65,0),(-2.65,0),(-2.65,-.01),(2.65,-.01),(2.65,0)],scale=[(.80,1),(1,1)],spine=[(0,0,0),(0,0,-18)]))]),
        Transform(translation=(0,15.25,-54),
          children=[
          Inline(DEF='SPG-62MissileDirector',url=["../DDGArleighBurkeUnitedStates/MissileDirector.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/MissileDirector.x3d","../DDGArleighBurkeUnitedStates/MissileDirector.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/MissileDirector.wrl"])])]),
      Group(DEF='AFT04',
        children=[
        Transform(translation=(0,13.55,-55.5),
          children=[
          Shape(
            appearance=Appearance(USE='HazeGray'),
            geometry=Extrusion(crossSection=[(-2.65,-.07),(-2.3,2),(2.3,2),(2.65,-.07),(-2.65,-.07)],orientation=[(1,0,0,-.2),(1,0,0,.2)],scale=[(.84,1),(1,1.02)],solid=False,spine=[(0,0,0),(0,0,-15)]))]),
        Transform(DEF='Aft04NonSkid',translation=(0,15.56,-55.9),
          children=[
          Shape(
            appearance=Appearance(
              texture=ImageTexture(USE='NONSKID')),
            geometry=Extrusion(creaseAngle=.85,crossSection=[(2.3,0),(-2.3,0),(-2.3,-.01),(2.3,-.01),(2.3,0)],scale=[(.84,1),(1,1)],spine=[(0,0,0),(0,0,-14.2)]))]),
        Transform(translation=(0,17.25,-58),
          children=[
          Inline(USE='SPG-62MissileDirector')])]),
      Group(DEF='AFT05',
        children=[
        Transform(
          children=[
          Transform(DEF='Aft05Aft',translation=(0,15.55,-62),
            children=[
            Shape(
              appearance=Appearance(USE='HazeGray'),
              geometry=Extrusion(crossSection=[(-2.1,0),(-1.9,1.5),(1.9,1.5),(2.1,0),(-2.1,0)],scale=[(1,.0001),(1,1)],spine=[(0,0,0),(0,0,-.2)]))]),
          Transform(DEF='Aft05FWD',translation=(0,15.55,-69.80),
            children=[
            Shape(
              appearance=Appearance(USE='HazeGray'),
              geometry=Extrusion(ccw=False,crossSection=[(2.3,0),(2.1,1.5),(-2.1,1.5),(-2.3,0),(2.3,0)],scale=[(1,1),(1,.0001)],spine=[(0,0,-0),(0,0,-.3)]))]),
          Transform(DEF='Aft05STBD',translation=(0,15.55,-62),
            children=[
            Shape(
              appearance=Appearance(USE='HazeGray'),
              geometry=Extrusion(crossSection=[(2.1,0),(2.1,1.5),(2.3,0),(2.1,0)],scale=[(.91,.0001),(.91,1),(1,1),(1,.0001)],spine=[(0,0,0),(0,0,-.2),(0,0,-7.8),(0,0,-8)]))]),
          Transform(DEF='Aft05Port',translation=(0,15.55,-62),
            children=[
            Shape(
              appearance=Appearance(USE='HazeGray'),
              geometry=Extrusion(crossSection=[(-2.3,0),(-2.1,1.5),(-2.1,0),(-2.3,0)],scale=[(.91,.0001),(.91,1),(1,1),(1,.0001)],spine=[(0,0,0),(0,0,-.2),(0,0,-7.8),(0,0,-8)]))])]),
        Transform(DEF='STACK',scale=(.9,1,.9),translation=(-1.15,17,-44.5),
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
              geometry=Cylinder(bottom=False,height=1.2,radius=1.7))])]),
        Transform(translation=(0,0,-4.25),
          children=[
          Transform(USE='STACK')]),
        Transform(scale=(.5,1,.5),translation=(1,0,-34),
          children=[
          Transform(USE='STACK')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AftSuperstructure.py")
