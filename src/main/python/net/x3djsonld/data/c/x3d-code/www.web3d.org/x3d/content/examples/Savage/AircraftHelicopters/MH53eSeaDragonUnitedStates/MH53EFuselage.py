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
    meta(content='MH53EFuselage.x3d',name='title'),
    meta(content='MH-53E fuselage body created by extrusion. Notice the 20 degreee to port cantation of the tail pylon. Dimensions in proportion with fuselage.',name='description'),
    meta(content='LT Terry D. Norbraten, USN',name='creator'),
    meta(content='15 March 2004',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='1.0',name='version'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/h-53.htm',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/mh-53e-wasp-dr5.jpg http://images.google.com/imgres?imgurl=gra.midco.net/mlgould/Helicopters/MH-53E%2520Sea%2520Dragon.jpg&imgrefurl=http://gra.midco.net/mlgould/M-R.html&h=226&w=332&sz=32&tbnid=ICDN8Yoa8mAJ:&tbnh=78&tbnw=114&prev=/images%3Fq%3DMH-53E%26hl%3Den%26lr%3D%26ie%3DUTF-8%26oe%3DUTF-8%26c2coff%3D1 http://www.history.navy.mil/planes/mh-53e.jpg http://digilander.libero.it/31ATSG/MH-53E%20163057-41.jpg http://www.ndu.edu/nwc/nwcCLIPART/US_NAVY/Equipment/Helicopters/MH-53E(Sea-Dragon)/MH53ESeaDragon01.jpg',name='Image'),
    meta(content='MH-53E Sea Dragon Fuselage',name='subject'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53EFuselage.x3d',name='identifier'),
    meta(content='X3D-Edit, http://www.web3d.org/x3d/translation/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='Fuselage',
      children=[
      Transform(scale=(1,.9,.89),translation=(0,.98,-1.48),
        children=[
        Shape(DEF='Upper',
          appearance=Appearance(
            material=Material(diffuseColor=(.208,.388,.463),emissiveColor=(.0471,.0863,0))),
          geometry=Extrusion(creaseAngle=.9,crossSection=[(-.0335749,-1.53357),(-.533575,-1.53357),(-.533575,4.86643),(-.422015,4.91448),(-.335685,4.93258),(-.271015,4.93358),(-.210305,4.92333),(-.153585,4.90246),(-.100895,4.87162),(-.0407649,4.82007),(.022895,4.74077),(.085265,4.627),(.151745,4.43139),(.166425,4.36643),(.334615,3.7039),(.441255,2.98398),(.466425,1.66643),(.302505,-.169395),(-.0335749,-1.53357)],spine=[(.5,.5,0),(-.5,.5,0)]))]),
      Shape(DEF='Main',
        appearance=Appearance(
          material=Material(diffuseColor=(.208,.388,.463),emissiveColor=(.0471,.0863,0))),
        geometry=Extrusion(beginCap=False,creaseAngle=.628,crossSection=[(.8,.8),(1,.6),(1,-.8),(.8,-1),(-.8,-1),(-1,-.8),(-1,.6),(-.8,.8),(-.55048,.955001),(.571611,.946369),(.8,.8)],endCap=False,solid=False,spine=[(0,0,2.85),(0,0,-2.85)])),
      Transform(DEF='Cockpit',translation=(0,-0.4,3.55),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(.208,.388,.463),emissiveColor=(.0471,.0863,0))),
          geometry=Extrusion(creaseAngle=1.05,crossSection=[(.8,1.2),(1,1),(1,-.4),(.8,-.6),(-.8,-.6),(-1,-.4),(-1,1),(-.8,1.2),(-.55048,1.355),(.571611,1.34637),(.8,1.2)],endCap=False,scale=[(.1,.1),(.3109,.3109),(.3931,.3931),(.46,.46),(.5217,.5217),(.5886,.5886),(.6606,.6606),(.748,.748),(.8663,.8663),(1,1)],solid=False,spine=[(0,0,.8),(0,0,.75011),(0,0,.711045),(0,0,.663734),(0,0,.604192),(0,0,.518998),(0,0,.399016),(0,0,.207394),(0,0,-.146099),(0,0,-.7)])),
        Transform(DEF='CockpitImage',scale=(0.99,0.99,0.99),translation=(0,0,-0.7),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(.208,.388,.463),emissiveColor=(.0471,.0863,0)),
              texture=ImageTexture(url=["MH-53ECockpit.jpg","https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH-53ECockpit.jpg"]),
              textureTransform=TextureTransform(scale=(-1,1),translation=(-.986,.0125))),
            geometry=Extrusion(beginCap=False,creaseAngle=1.05,crossSection=[(.8,1.2),(1,1),(1,-.4),(.8,-.6),(-.8,-.6),(-1,-.4),(-1,1),(-.8,1.2),(-.55048,1.355),(.571611,1.34637),(.8,1.2)],solid=False,spine=[(0,.00612245,-.693878),(0,.00612245,-.706122)]))])]),
      Transform(DEF='GunnersWindow',rotation=(0,1,0,1.571),translation=(1.0005,0,2.3),
        children=[
        Shape(DEF='Windscreen',
          geometry=Rectangle2D(size=(0.4,0.6)),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0),shininess=.5)))]),
      Transform(DEF='PortMid',scale=(1,0.7,0.8),translation=(0,0,-3.3),
        children=[
        Transform(USE='GunnersWindow')]),
      Transform(DEF='PortAft',scale=(1,0.7,0.8),translation=(0,0,-4.3),
        children=[
        Transform(USE='GunnersWindow')]),
      Transform(DEF='StarboardAccessUpper',scale=(1,0.7,1),translation=(-2.001,0,0),
        children=[
        Transform(USE='GunnersWindow')]),
      Transform(DEF='StarboardAccessLower',scale=(1,.4,0.395),translation=(-1.005,-0.6,2.1),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0),shininess=.5)),
          geometry=IndexedLineSet(colorPerVertex=False,coordIndex=[0,1,2,3,4,-1],
            coord=Coordinate(point=[(0.0,0.0,0.0),(0.0,0.0,1.0),(0.0,1.0,1.0),(0.0,1.0,0.0),(0.0,0.0,0.0)])))]),
      Transform(DEF='StarboardMid',translation=(-2.005,0,0),
        children=[
        Transform(USE='PortMid')]),
      Transform(DEF='StarboardAft',translation=(-2.005,0,0),
        children=[
        Transform(USE='PortAft')]),
      Transform(rotation=(0,1,0,1.571),translation=(0.02,0.37,-6.54),
        children=[
        Shape(DEF='Aft',
          appearance=Appearance(
            material=Material(diffuseColor=(.208,.388,.463),emissiveColor=(.0471,.0863,0))),
          geometry=Extrusion(beginCap=False,creaseAngle=.628,crossSection=[(1.9775,-.8225),(1.7775,-1.0225),(.3775,-1.0225),(.1775,-.8225),(.0224995,-.57298),(.0311315,.549111),(.1775,.777501),(.3775,.9775),(1.7775,.9775),(1.9775,.777501)],scale=[(1,1),(.9669,.9669),(.7915,.7915),(.7,.7),(.4527,.4527),(.3517,.3517),(.3,.3),(.1254,.1254),(.1118,.1118),(.1072,.1072),(.1045,.1045),(.1032,.1032),(.1019,.1019),(.1006,.1006),(.1,.1)],solid=False,spine=[(-3.7,.6,0),(-3.57279,.6,0),(-2.3966,.6,0),(-1.9,.6,0),(-.976534,.6,0),(-.45138,.6,0),(0,.6,0),(3.09134,.6,0),(3.17433,.6,0),(3.19015,.6,0),(3.1959,.6,0),(3.19785,.6,0),(3.19919,.6,0),(3.19989,.6,0),(3.2,.6,0)]))]),
      Transform(rotation=(0,0,1,3.142),scale=(1,.46,1),translation=(-.01,2.05,-5.25),
        children=[
        Shape(DEF='UpperAft',
          appearance=Appearance(
            material=Material(diffuseColor=(.208,.388,.463),emissiveColor=(.0471,.0863,0))),
          geometry=Extrusion(beginCap=False,creaseAngle=.628,crossSection=[(.5,-1),(-.5,-1),(-.5,0),(.5,0),(.5,-1)],scale=[(1,1),(.1,.1)],solid=False,spine=[(-.0098987,2.4033,2.4066),(-.00329957,2.4033,-2.4)]))]),
      Transform(rotation=(0,0,1,-0.349),scale=(1,1,1.2),translation=(0.48,2.25,-10.2),
        children=[
        Shape(DEF='TailPylon',
          appearance=Appearance(
            material=Material(diffuseColor=(.208,.388,.463),emissiveColor=(.0471,.0863,0))),
          geometry=Extrusion(ccw=False,convex=False,creaseAngle=.628,crossSection=[(.655971,-.248586),(.655339,-.246093),(.651563,-.242427),(.539975,-.206212),(-1.57486,.396217),(-1.63932,.445531),(-1.64109,1.85141),(-1.44149,1.80405),(1.05597,.351414),(1.27014,.124608),(1.35907,-.114254),(1.35597,-.448586),(1.24545,-.754414),(1.07399,-.945112),(.855971,-1.04859),(.793477,-1.0518),(.748985,-1.03363),(.704366,-.986023),(.650942,-.83059),(.655971,-.248586)],solid=False,spine=[(.1,.2,0),(-.1,.2,0)])),
        Transform(rotation=(1,0,0,-0.349),scale=(1,1.12,1.6),translation=(0,1.19,-0.5),
          children=[
          Shape(DEF='TailRotorGearbox',
            appearance=Appearance(
              material=Material(diffuseColor=(.208,.388,.463),emissiveColor=(.0471,.0863,0))),
            geometry=Sphere(radius=0.3))]),
        Transform(rotation=(1,0,0,1.571),translation=(-1.5,0.4,0.4),
          children=[
          Transform(rotation=(0,1,0,0.349),
            children=[
            Shape(DEF='PylonStabilizer',
              appearance=Appearance(
                material=Material(diffuseColor=(.208,.388,.463),emissiveColor=(.0471,.0863,0))),
              geometry=Extrusion(ccw=False,creaseAngle=1.05,crossSection=[(-.1,0),(.113389,.0259362),(.122774,.0329467),(.124196,.0373062),(.123531,.0402589),(.120283,.0447364),(.103393,.0552636),(-.1,.1),(-1,.1),(-1.22141,.0635873),(-1.23047,.0545683),(-1.23096,.0484758),(-1.22706,.0424007),(-1.21305,.0334731),(-1.04187,.00278435),(-1,0),(-.1,0)],scale=[(1,1),(.7,.7),(.4,.4)],spine=[(1.5,0,0),(0,0,0),(-2.02,0,0)]))])]),
        Transform(rotation=(0,0,1,0.798),translation=(-0.7,-0.31,0.4),
          children=[
          Shape(DEF='TailStrut',
            appearance=Appearance(
              material=Material(diffuseColor=(.208,.388,.463),emissiveColor=(.0471,.0863,0))),
            geometry=Cylinder(radius=0.08))])])]),
    Viewpoint(description='Fuselage Front, level'),
    Viewpoint(description='Fuselage Left, leve sideview',orientation=(0,1,0,1.571),position=(15,0,0)),
    Viewpoint(description='Fuselage Right, level sideview',orientation=(0,-1,0,1.571),position=(-15,0,0))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MH53EFuselage.py")
