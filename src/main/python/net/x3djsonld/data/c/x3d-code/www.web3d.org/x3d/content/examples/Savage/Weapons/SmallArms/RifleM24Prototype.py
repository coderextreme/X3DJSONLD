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
    meta(content='RifleM24Prototype.x3d',name='title'),
    meta(content='Prototype of M24 bolt-action sniper rifle used by the US Army.',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='21 December 2001',name='created'),
    meta(content='22 August 2018',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/land/m14.htm',name='reference'),
    meta(content='http://www.dentrinity.com/Topics/m24perfect.htm',name='reference'),
    meta(content='http://www.empnet.com/imageworks/raj2.htm',name='reference'),
    meta(content='http://www.thepocket.com/waveffects.htm',name='reference'),
    meta(content='M24 Rifle',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Weapons/SmallArms/RifleM24Prototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='Rifle M24',name='RifleM24',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='input true to fire',name='trigger',type='SFBool'),
        field(accessType='outputOnly',appinfo='output true when fired',name='fire',type='SFBool'),
        field(accessType='inputOnly',appinfo='trigger animation',name='animationStartTime',type='SFTime')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Viewpoint(description='M24 sniper rifle',position=(-4,-.1,10)),
          LOD(range=[100],
            children=[
            Group(
              children=[
              Group(DEF='Viewpoints',
                #  High Resolution 
                children=[
                Viewpoint(description='M24 from ahead',orientation=(0.009,.999,0.036,1.5266),position=(4.1,0,.4)),
                Viewpoint(description='M24 left-over-the-shoulder view',orientation=(-0.008,1,-0.015,4.6497),position=(-12.2,-.8,-3)),
                Viewpoint(description='M24 right-over-the-shoulder view',orientation=(-0.008,1,-0.015,4.6497),position=(-13.2,-.7,1.8)),
                Viewpoint(description='M24 scope view',fieldOfView=0.099,orientation=(0.003,-1,-0.015,1.5497),position=(-7,.4,0))]),
              Group(DEF='High',
                children=[
                Transform(DEF='ShootShockTransform',scale=(10,10,10),
                  children=[
                  Transform(DEF='BulletTransform',rotation=(0,0,1,-1.57),scale=(0.8,1,0.8),translation=(-0.64,0.0,0),
                    children=[
                    Shape(
                      appearance=Appearance(DEF='BulletColor',
                        material=Material(ambientIntensity=0.1,diffuseColor=(0.804,0.678,0),shininess=0.1,specularColor=(0.85,0.85,0.85))),
                      geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.00),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.00,-0.013),(-0.00494,-0.01196),(-0.00923,-0.00923),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.00,0.013)],scale=[(0.75,0.75),(0.75,0.75),(0.7,0.7),(0.65,0.65),(0.55,0.55),(0.4,0.4),(0.25,0.25),(0.1,0.1)],spine=[(0,0.125,0),(0,0.13,0),(0,0.135,0),(0,0.165,0),(0,0.17,0),(0,0.175,0),(0,0.18,0),(0,0.185,0)]))]),
                  Transform(DEF='Barrel',rotation=(0.58,-0.58,0.58,2.09),
                    children=[
                    Transform(DEF='BarrelPoint',translation=(0,-0.1,0),
                      children=[
                      Shape(
                        appearance=Appearance(DEF='BarrelColor',
                          material=Material(ambientIntensity=0.1,diffuseColor=(0.5,0.5,0.5),shininess=0.8,specularColor=(0.85,0.85,0.85))),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.00),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.00,-0.013),(-0.00494,-0.01196),(-0.00923,-0.00923),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.00,0.013),(0.0,0.012),(-0.00425,0.0109),(-0.0085,0.0085),(-0.0109,0.00425),(-0.012,-0.0),(-0.0109,-0.00425),(-0.0085,-0.0085),(-0.00425,-0.0109),(0.0,-0.012),(0.00425,-0.0109),(.0085,-0.0085),(0.0109,-0.00425),(0.012,0.0),(0.0109,0.00425),(0.0085,0.0085),(0.00425,0.0109),(0.0,0.012)],scale=[(0.9,0.9),(0.55,0.55)],spine=[(0,0,0),(0,-0.005,0)]))]),
                    Transform(DEF='FlashTransform',translation=(0,0.15,0),
                      children=[
                      Transform(DEF='Flame1',rotation=(0,0,1,3.14),scale=(0.02,0.12,0.02),
                        children=[
                        Shape(
                          geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,3,4,5,-1,6,7,8,-1],
                            coord=Coordinate(point=[(0.25,0.0,0.00),(0.15,1.0,0.10),(0.05,0.0,0.15),(0.18,0.0,0.05),(0.00,1.2,0.05),(-0.10,0.0,0.05),(-0.00,0.0,0.15),(-0.13,0.8,0.10),(-0.25,0.0,0.00)]),
                            color=Color(color=[(0.9,0.5,0.0),(0.9,0.5,0),(0.8,0.3,0.0),(0.9,0.3,0),(1.0,1.0,0.0),(0.9,0.3,0),(0.7,0.1,0.2),(0.9,0.8,0),(1.0,0.0,0.0)])))]),
                      Transform(DEF='Flame2',rotation=(0.71,0,0.71,3.14),scale=(0.02,0.1,0.02),
                        children=[
                        Shape(
                          geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,3,4,5,-1,6,7,8,-1],
                            coord=Coordinate(point=[(0.25,0.0,0.00),(0.15,1.0,0.10),(0.05,0.0,0.15),(0.18,0.0,0.05),(0.00,1.2,0.05),(-0.10,0.0,0.05),(-0.00,0.0,0.15),(-0.13,0.8,0.10),(-0.25,0.0,0.00)]),
                            color=Color(color=[(1.0,1.0,1.0),(0.9,0.9,0.9),(0.804,0.788,0.788),(0.8,0.8,0.8),(1.0,1.0,1.0),(1.0,1.0,0.0),(0.7,0.7,0.7),(0.9,0.8,0.9),(1.0,0.498,0)])))]),
                      Transform(DEF='Flame3',rotation=(0.79,0,0.61,3.14),scale=(0.02,0.1,0.02),
                        children=[
                        Shape(
                          geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,3,4,5,-1,6,7,8,-1],
                            coord=Coordinate(point=[(0.25,0.0,0.00),(0.15,1.0,0.10),(0.05,0.0,0.15),(0.18,0.0,0.05),(0.00,1.2,0.05),(-0.10,0.0,0.05),(-0.00,0.0,0.15),(-0.13,0.8,0.10),(-0.25,0.0,0.00)]),
                            color=Color(color=[(1.0,1.0,1.0),(0.9,0.9,0.9),(0.804,0.788,0.788),(0.8,0.8,0.8),(1.0,1.0,1.0),(1.0,1.0,0.0),(0.7,0.7,0.7),(0.9,0.8,0.9),(1.0,0.498,0)])))])]),
                    Transform(DEF='BarrelFront',translation=(0,-0.1,0),
                      children=[
                      Shape(
                        appearance=Appearance(USE='BarrelColor'),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.00),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.00,-0.013),(-0.00494,-0.01196),(-0.00923,-0.00923),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.00,0.013),(0.0,0.012),(-0.00425,0.0109),(-0.0085,0.0085),(-0.0109,0.00425),(-0.012,-0.0),(-0.0109,-0.00425),(-0.0085,-0.0085),(-0.00425,-0.0109),(0.0,-0.012),(0.00425,-0.0109),(.0085,-0.0085),(0.0109,-0.00425),(0.012,0.0),(0.0109,0.00425),(0.0085,0.0085),(0.00425,0.0109),(0.0,0.012)],spine=[(0,0,0),(0,0.05,0)]))]),
                    Transform(DEF='BarrelCenter',
                      children=[
                      Shape(
                        appearance=Appearance(USE='BarrelColor'),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.013),(0.00494,0.01196),(0.008,0.008),(0.01196,0.00494),(0.013,0.00),(0.01196,-0.00494),(0.008,-0.008),(0.00494,-0.01196),(0.00,-0.013),(-0.00494,-0.01196),(-0.008,-0.008),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.008,0.008),(-0.00494,0.01196),(0.00,0.013),(0.0,0.012),(-0.00425,0.0109),(-0.0085,0.0085),(-0.0109,0.00425),(-0.012,-0.0),(-0.0109,-0.00425),(-0.0085,-0.0085),(-0.00425,-0.0109),(0.0,-0.012),(0.00425,-0.0109),(.0085,-0.0085),(0.0109,-0.00425),(0.012,0.0),(0.0109,0.00425),(0.0085,0.0085),(0.00425,0.0109),(0.0,0.012)],spine=[(0.0,-0.1,0.0),(0.0,0.35,0.0)]))]),
                    Transform(DEF='BarrelBack',translation=(0,0.42,0),
                      children=[
                      Shape(
                        appearance=Appearance(USE='BarrelColor'),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.00),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.00,-0.013),(-0.00494,-0.01196),(-0.00923,-0.00923),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.00,0.013),(0.0,0.012),(-0.00425,0.0109),(-0.0085,0.0085),(-0.0109,0.00425),(-0.012,-0.0),(-0.0109,-0.00425),(-0.0085,-0.0085),(-0.00425,-0.0109),(0.0,-0.012),(0.00425,-0.0109),(.0085,-0.0085),(0.0109,-0.00425),(0.012,0.0),(0.0109,0.00425),(0.0085,0.0085),(0.00425,0.0109),(0.0,0.012)],spine=[(0,-0.07,0),(0,0.05,0)]))]),
                    Transform(DEF='BarrelBulletLoad',rotation=(0,1,0,1.3),translation=(0,0.42,0),
                      children=[
                      Shape(
                        appearance=Appearance(USE='BarrelColor'),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.013,0.00),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.00,-0.013),(-0.00494,-0.01196),(-0.00923,-0.00923),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.00,0.013),(0.0,0.012),(-0.00425,0.0109),(-0.0085,0.0085),(-0.0109,0.00425),(-0.012,-0.0),(-0.0109,-0.00425),(-0.0085,-0.0085),(-0.00425,-0.0109),(0.0,-0.012),(0.00425,-0.0109),(.0085,-0.0085),(0.0109,-0.00425),(0.012,0.0)],spine=[(0,0.05,0),(0,0.10,0)]))]),
                    Transform(DEF='BarrelBulletLoadEnd',translation=(0,0.42,0),
                      children=[
                      Shape(
                        appearance=Appearance(USE='BarrelColor'),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.00),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.00,-0.013),(-0.00494,-0.01196),(-0.00923,-0.00923),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.00,0.013),(0.0,0.012),(-0.00425,0.0109),(-0.0085,0.0085),(-0.0109,0.00425),(-0.012,-0.0),(-0.0109,-0.00425),(-0.0085,-0.0085),(-0.00425,-0.0109),(0.0,-0.012),(0.00425,-0.0109),(.0085,-0.0085),(0.0109,-0.00425),(0.012,0.0),(0.0109,0.00425),(0.0085,0.0085),(0.00425,0.0109),(0.0,0.012)],spine=[(0,0.10,0),(0,0.123,0)]))]),
                    Transform(DEF='BarrelEnd',scale=(0.9,1.1,0.9),translation=(0,0.405,0),
                      children=[
                      Shape(
                        appearance=Appearance(DEF='BarrelEndColor',
                          material=Material(ambientIntensity=0.1,diffuseColor=(0.85,0.85,0.85),shininess=0.8,specularColor=(0.85,0.85,0.85))),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.00),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.00,-0.013),(-0.00494,-0.01196),(-0.00923,-0.00923),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.00,0.013)],scale=[(1.0,1.0),(1.0,1.0),(0.8,0.8),(0.8,0.8),(0.6,0.6)],spine=[(0,0.125,0),(0,0.13,0),(0,0.135,0),(0,0.14,0),(0,0.15,0)]))])]),
                  Transform(DEF='BulletGuide',rotation=(0,1,0,1.57),translation=(0.08,0.02,0.011),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(0.3,0.3,0.3))),
                      geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.006),(0.001,0.0057),(0.001,-0.0057),(0.0,-0.006),(-0.001,-0.0057),(-0.001,0.0057),(0.0,0.006)],scale=[(0.8,0.8),(1.5,1.0)],spine=[(0.01,0.0,0.0),(0.01,-0.01,0.0)]))]),
                  Transform(DEF='Telescope',rotation=(0.58,-0.58,0.58,2.09),translation=(0,-0.01,0),
                    children=[
                    Transform(DEF='TelescopeLensFront',translation=(0,0.36,-0.05),
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(diffuseColor=(0.0941,0.455,0.804),emissiveColor=(0.0941,0.455,0.804),shininess=0.8,transparency=0.55)),
                        geometry=Cylinder(height=0.005,radius=0.02))]),
                    Transform(DEF='CircleLine',rotation=(1,0,0,1.57),scale=(0.0215,0.0215,0.015),translation=(0,0.35,-0.05),
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(diffuseColor=(0.957,0.643,0.376))),
                        geometry=IndexedLineSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1,60,61,-1,62,63,-1],
                          coord=Coordinate(point=[(0.0,1.0,0.0),(0.105,0.995,0.0),(0.208,0.978,0.0),(0.309,0.951,0.0),(0.407,0.914,0.0),(0.500,0.866,0.0),(0.588,0.809,0.0),(0.669,0.743,0.0),(0.743,0.669,0.0),(0.809,0.588,0.0),(0.866,0.500,0.0),(0.914,0.407,0.0),(0.951,0.309,0.0),(0.978,0.208,0.0),(0.995,0.105,0.0),(1.0,0.0,0.0),(0.995,-0.105,0.0),(0.978,-0.208,0.0),(0.951,-0.309,0.0),(0.914,-0.407,0.0),(0.866,-0.500,0.0),(0.809,-0.588,0.0),(0.743,-0.669,0.0),(0.669,-0.743,0.0),(0.588,-0.809,0.0),(0.500,-0.866,0.0),(0.407,-0.914,0.0),(0.309,-0.951,0.0),(0.208,-0.978,0.0),(0.105,-0.995,0.0),(0.0,-1.0,0.0),(-0.105,-0.995,0.0),(-0.208,-0.978,0.0),(-0.309,-0.951,0.0),(-0.407,-0.914,0.0),(-0.500,-0.866,0.0),(-0.588,-0.809,0.0),(-0.669,-0.743,0.0),(-0.743,-0.669,0.0),(-0.809,-0.588,0.0),(-0.866,-0.500,0.0),(-0.914,-0.407,0.0),(-0.951,-0.309,0.0),(-0.978,-0.208,0.0),(-0.995,-0.105,0.0),(-1.0,-0.0,0.0),(-0.995,0.105,0.0),(-0.978,0.208,0.0),(-0.951,0.309,0.0),(-0.914,0.407,0.0),(-0.866,0.500,0.0),(-0.809,0.588,0.0),(-0.743,0.669,0.0),(-0.669,0.743,0.0),(-0.588,0.809,0.0),(-0.500,0.866,0.0),(-0.407,0.914,0.0),(-0.309,0.951,0.0),(-0.208,0.978,0.0),(-0.105,0.995,0.0),(0,1,0),(0,-1,0),(1,0,0),(-1,0,0)])))]),
                    Transform(DEF='TelescopeLensForEye',translation=(0,0.58,-0.05),
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(diffuseColor=(0.0941,0.455,0.804),transparency=0.5)),
                        geometry=Cylinder(height=0.005,radius=0.016))]),
                    Transform(DEF='TelescopeMain',translation=(0,0.35,-0.05),
                      children=[
                      Shape(
                        appearance=Appearance(DEF='TelescopeColor',
                          material=Material(diffuseColor=(0.2,0.2,0.2))),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.00),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.00,-0.013),(-0.00494,-0.01196),(-0.00923,-0.00923),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.00,0.013),(0.0,0.012),(-0.00425,0.0109),(-0.0085,0.0085),(-0.0109,0.00425),(-0.012,-0.0),(-0.0109,-0.00425),(-0.0085,-0.0085),(-0.00425,-0.0109),(0.0,-0.012),(0.00425,-0.0109),(.0085,-0.0085),(0.0109,-0.00425),(0.012,0.0),(0.0109,0.00425),(0.0085,0.0085),(0.00425,0.0109),(0.0,0.012)],scale=[(1.7,1.7),(1.7,1.7),(1.4,1.4),(1.0,1.0),(1.0,1.0),(1.0,1.0),(1.0,1.0),(1.2,1.2),(1.35,1.35),(1.35,1.35),(1.35,1.35)],spine=[(0,0,0),(0,0.03,0),(0,0.05,0),(0,0.07,0),(0,0.1,0),(0,0.15,0),(0,0.17,0),(0,0.20,0),(0,0.23,0),(0,0.24,0),(0,0.25,0)]))]),
                    Transform(DEF='TelescopeBeltFront',translation=(0,0.45,-0.05),
                      children=[
                      Shape(
                        appearance=Appearance(USE='BarrelColor'),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.00),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.00,-0.013),(-0.00494,-0.01196),(-0.00923,-0.00923),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.00,0.013),(0.0,0.012),(-0.00425,0.0109),(-0.0085,0.0085),(-0.0109,0.00425),(-0.012,-0.0),(-0.0109,-0.00425),(-0.0085,-0.0085),(-0.00425,-0.0109),(0.0,-0.012),(0.00425,-0.0109),(.0085,-0.0085),(0.0109,-0.00425),(0.012,0.0),(0.0109,0.00425),(0.0085,0.0085),(0.00425,0.0109),(0.0,0.012)],scale=[(1.15,1.15),(1.15,1.15)],spine=[(0,0,0),(0,0.015,0)]))]),
                    Transform(DEF='TelescopeBeltBack',translation=(0,0.52,-0.05),
                      children=[
                      Shape(
                        appearance=Appearance(USE='BarrelColor'),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.00),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.00,-0.013),(-0.00494,-0.01196),(-0.00923,-0.00923),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.00,0.013),(0.0,0.012),(-0.00425,0.0109),(-0.0085,0.0085),(-0.0109,0.00425),(-0.012,-0.0),(-0.0109,-0.00425),(-0.0085,-0.0085),(-0.00425,-0.0109),(0.0,-0.012),(0.00425,-0.0109),(.0085,-0.0085),(0.0109,-0.00425),(0.012,0.0),(0.0109,0.00425),(0.0085,0.0085),(0.00425,0.0109),(0.0,0.012)],scale=[(1.2,1.2),(1.2,1.2)],spine=[(0,0,0),(0,0.015,0)]))]),
                    Transform(DEF='TelescopeBoltFront',rotation=(1,0,0,1.57),scale=(0.65,0.8,0.65),translation=(0,0.458,-0.0365),
                      children=[
                      Shape(
                        appearance=Appearance(USE='BarrelColor'),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.00),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.00,-0.013),(-0.00494,-0.01196),(-0.00923,-0.00923),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.00,0.013)],scale=[(1.2,1.2),(1.2,1.2)],spine=[(0,0,0),(0,0.02,0)]))]),
                    Transform(DEF='TelescopeBoltBack',rotation=(1,0,0,1.57),scale=(0.65,0.8,0.65),translation=(0,0.53,-0.0365),
                      children=[
                      Shape(
                        appearance=Appearance(USE='BarrelColor'),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.00),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.00,-0.013),(-0.00494,-0.01196),(-0.00923,-0.00923),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.00,0.013)],scale=[(1.2,1.2),(1.2,1.2)],spine=[(0,0,0),(0,0.02,0)]))]),
                    Transform(DEF='AdjustmentLeft',rotation=(0,0,1,1.57),translation=(-0.013,0.49,-0.048),
                      children=[
                      Shape(
                        appearance=Appearance(DEF='TelescopeAdjustmentColor',
                          material=Material(diffuseColor=(0.1,0.1,0.1),emissiveColor=(0.3,0.3,0.3),shininess=0.7,specularColor=(0.1,0.1,0.1))),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.013),(0.00494,0.01196),(0.008,0.008),(0.01196,0.00494),(0.013,0.00),(0.01196,-0.00494),(0.008,-0.008),(0.00494,-0.01196),(0.00,-0.013),(-0.00494,-0.01196),(-0.008,-0.008),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.008,0.008),(-0.00494,0.01196),(0.00,0.013)],scale=[(0.8,0.8),(0.8,0.8)],spine=[(0,0,0),(0,0.01,0)]))]),
                    Transform(DEF='AdjustmentRight',rotation=(0,0,1,1.57),translation=(0.023,0.49,-0.048),
                      children=[
                      Shape(
                        appearance=Appearance(USE='TelescopeAdjustmentColor'),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.013),(0.00494,0.01196),(0.008,0.008),(0.01196,0.00494),(0.013,0.00),(0.01196,-0.00494),(0.008,-0.008),(0.00494,-0.01196),(0.00,-0.013),(-0.00494,-0.01196),(-0.008,-0.008),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.008,0.008),(-0.00494,0.01196),(0.00,0.013)],scale=[(0.8,0.8),(0.8,0.8)],spine=[(0,0,0),(0,0.01,0)]))]),
                    Transform(DEF='AdjustmentTop',rotation=(1,0,0,1.57),translation=(0,0.49,-0.08),
                      children=[
                      Shape(
                        appearance=Appearance(USE='TelescopeAdjustmentColor'),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.013),(0.00494,0.01196),(0.008,0.008),(0.01196,0.00494),(0.013,0.00),(0.01196,-0.00494),(0.008,-0.008),(0.00494,-0.01196),(0.00,-0.013),(-0.00494,-0.01196),(-0.008,-0.008),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.008,0.008),(-0.00494,0.01196),(0.00,0.013)],scale=[(0.8,0.8),(0.8,0.8)],spine=[(0,0,0),(0,0.01,0)]))]),
                    Transform(DEF='Adjustment',rotation=(1,0,0,1.57),translation=(0,0.49,-0.072),
                      children=[
                      Shape(
                        appearance=Appearance(USE='TelescopeAdjustmentColor'),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.00),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.00,-0.013),(-0.00494,-0.01196),(-0.00923,-0.00923),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.00,0.013)],scale=[(0.6,0.6),(0.6,0.6)],spine=[(0,0,0),(0,0.005,0)]))]),
                    Transform(DEF='AdjustmentTele',rotation=(1,0,0,1.57),translation=(0,0.49,-0.067),
                      children=[
                      Shape(
                        appearance=Appearance(USE='TelescopeColor'),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.00),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.00,-0.013),(-0.00494,-0.01196),(-0.00923,-0.00923),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.00,0.013)],scale=[(0.6,0.6),(0.6,0.6)],spine=[(0,0,0),(0,0.005,0)]))])]),
                  Transform(DEF='HandRest',rotation=(0.58,-0.58,0.58,2.09),scale=(2,2,2),translation=(-0.38,0.012,0),
                    children=[
                    Shape(
                      appearance=Appearance(DEF='HandrestColor',
                        material=Material(diffuseColor=(0.3,0.3,0.3))),
                      geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.00,0.013)],scale=[(0.6,2.0),(0.4,2.3)],spine=[(0,-0.1,0),(0.0,0.09,0.0)]))]),
                  Transform(DEF='Handle',
                    children=[
                    Transform(DEF='HandleBody',rotation=(0,0,1,-0.4),translation=(-0.57,-0.0274,0.0),
                      children=[
                      Shape(
                        appearance=Appearance(USE='HandrestColor'),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.021),(0.0435,0.02),(0.057,0.01),(0.06,0.0),(0.057,-0.01),(0.0435,-0.02),(0.0,-0.021),(-0.0435,-0.02),(-0.057,-0.01),(-0.06,0.0),(-0.057,0.01),(-0.0435,0.02),(0.0,0.021)],scale=[(0.38,0.38),(0.36,0.36),(0.3,0.3),(0.25,0.25),(0.32,0.34)],spine=[(-0.03,-0.09,0.0),(-0.03,-0.05,0.0),(-0.022,-0.025,0.0),(-0.01,-0.01,0.0),(0.02,0.01,0.0)]))]),
                    Transform(DEF='HandleEnd',rotation=(0,0,1,0.385),translation=(-0.648,-0.1168,0.0),
                      children=[
                      Shape(
                        appearance=Appearance(USE='BarrelEndColor'),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.021),(0.0435,0.02),(0.057,0.01),(0.06,0.0),(0.057,-0.01),(0.0435,-0.02),(0.0,-0.021),(-0.0435,-0.02),(-0.057,-0.01),(-0.06,0.0),(-0.057,0.01),(-0.0435,0.02),(0.0,0.021)],scale=[(0.37,0.37),(0.38,0.38)],spine=[(0.02,0.01,0.0),(0.021,0.011,0.0)]))])]),
                  Transform(DEF='Stack',
                    children=[
                    Transform(DEF='StackBody',rotation=(0.58,0.58,-0.58,2.09),translation=(-0.7,-0.145,0),
                      children=[
                      Transform(rotation=(1,0,0,-0.25),
                        children=[
                        Shape(
                          appearance=Appearance(USE='TelescopeColor'),
                          geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.06),(0.01,0.057),(0.02,0.0435),(0.021,0.0),(0.02,-0.0435),(0.01,-0.057),(0.0,-0.06),(-0.01,-0.057),(-0.02,-0.0435),(-0.021,0.0),(-0.02,0.0435),(-0.01,0.057),(0.0,0.06)],scale=[(1.0,1.0),(0.5,0.5),(0.1,0.1)],spine=[(0,-0.1,-0.09),(0.0,0.1,-0.09),(0.0,0.12,-0.09)]))])]),
                    Transform(DEF='StackEnd',rotation=(0.58,0.58,-0.58,2.09),translation=(-0.918,-0.2015,0),
                      children=[
                      Transform(rotation=(1,0,0,-0.25),
                        children=[
                        Shape(
                          appearance=Appearance(DEF='StackColor',
                            material=Material(ambientIntensity=0.1,diffuseColor=(0.85,0.85,0.85),shininess=0.8,specularColor=(0.85,0.85,0.85))),
                          geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.06),(0.01,0.057),(0.02,0.0435),(0.021,0.0),(0.02,-0.0435),(0.01,-0.057),(0.0,-0.06),(-0.01,-0.057),(-0.02,-0.0435),(-0.021,0.0),(-0.02,0.0435),(-0.01,0.057),(0.0,0.06)],scale=[(0.9,0.9),(1.0,1.0)],spine=[(0.0,0.119,-0.09),(0.0,0.125,-0.09)]))])])]),
                  Transform(DEF='Trigger',
                    children=[
                    Transform(DEF='TriggerGuard',translation=(-0.54,-0.042,0),
                      children=[
                      Shape(
                        appearance=Appearance(USE='HandrestColor'),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.006),(0.001,0.0057),(0.001,-0.0057),(0.0,-0.006),(-0.001,-0.0057),(-0.001,0.0057),(0.0,0.006)],spine=[(-0.02,0.0,0.0),(-0.028,-0.01,0.0),(-0.03,-0.02,0.0),(-0.021,-0.031,0.0),(-0.006,-0.035,0.0),(0.01,-0.033,0.0),(0.02,-0.02,0.0),(0.02,-0.01,0.0),(0.021,0.0,0.0)]))]),
                    Transform(DEF='TriggerPin',translation=(-0.565,-0.042,0),
                      children=[
                      Shape(
                        appearance=Appearance(USE='BarrelColor'),
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.006),(0.001,0.0057),(0.001,-0.0057),(0.0,-0.006),(-0.001,-0.0057),(-0.001,0.0057),(0.0,0.006)],scale=[(1.5,1.0),(1.0,1.0),(0.8,0.8),(0.7,0.7)],spine=[(0.01,0.0,0.0),(0.011,-0.01,0.0),(0.015,-0.02,0.0),(0.02,-0.025,0.0)]))])]),
                  Transform(DEF='SafetyPin',scale=(2.2,1.35,0.8),translation=(-0.565,-0.008,0.0085),
                    children=[
                    Shape(
                      appearance=Appearance(USE='StackColor'),
                      geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.0,0.006),(0.001,0.0057),(0.001,-0.0057),(0.0,-0.006),(-0.001,-0.0057),(-0.001,0.0057),(0.0,0.006)],scale=[(1.5,1.0),(1.0,1.0),(0.8,0.8),(0.3,0.3)],spine=[(0.01,0.0,0.0),(0.01,-0.01,0.0),(0.008,-0.02,0.0),(0.006,-0.025,0.0)]))]),
                  Transform(DEF='Safety',scale=(1.0,0.7,0.6),translation=(-0.546,-0.04,0.009),
                    children=[
                    Shape(
                      appearance=Appearance(USE='StackColor'),
                      geometry=Sphere(radius=0.008))]),
                  Group(
                    children=[
                    Script(DEF='TriggerScript',
                      field=[
                      field(accessType='inputOnly',name='trigger',type='SFBool'),
                      field(accessType='outputOnly',name='fire',type='SFBool'),
                      field(accessType='inputOnly',name='animationStartTime',type='SFTime'),
                      field(accessType='outputOnly',name='clockStartTime',type='SFTime')],
                      IS=IS(
                        connect=[
                        connect(nodeField='trigger',protoField='trigger'),
                        connect(nodeField='animationStartTime',protoField='animationStartTime')])),
                    TimeSensor(DEF='Clock',cycleInterval=0.5),
                    Sound(DEF='RifleSound',
                      source=AudioClip(DEF='RifleSoundAudio',description='Rifle fire',url=["riflefire.wav","../../Weapons/SmallArms/riflefire.wav","https://savage.nps.edu/Savage/Weapons/SmallArms/riflefire.wav"])),
                    PositionInterpolator(DEF='TriggerInterpolator',key=[0.0,0.2,0.49,0.8,1.0],keyValue=[(-0.64,0.0,0.0),(-0.40,0.0,0.0),(1,0.0,0.0),(2,0.0,0.0),(51,0.0,0.0)]),
                    PositionInterpolator(DEF='FlashInterpolator',key=[0.0,0.3,0.5,0.8,1.0],keyValue=[(0,0.13,0),(0,-0.1,0),(0,-0.1,0),(0,0.15,0),(0,0.13,0)]),
                    PositionInterpolator(DEF='ShootShockInterpolator',key=[0.0,0.8,0.9,1.0],keyValue=[(-0.64,0.0,0.0),(-0.70,0.0,0.0),(-0.66,0.0,0.0),(-0.62,0.0,0.0)]),
                    ROUTE(fromField='clockStartTime',fromNode='TriggerScript',toField='set_startTime',toNode='Clock'),
                    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='TriggerInterpolator'),
                    ROUTE(fromField='value_changed',fromNode='TriggerInterpolator',toField='set_translation',toNode='BulletTransform'),
                    #  Rifle Sound 
                    ROUTE(fromField='clockStartTime',fromNode='TriggerScript',toField='set_startTime',toNode='RifleSoundAudio'),
                    #  Flash animation 
                    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='FlashInterpolator'),
                    ROUTE(fromField='value_changed',fromNode='FlashInterpolator',toField='set_translation',toNode='FlashTransform'),
                    #  Shoot shock animation 
                    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='ShootShockInterpolator'),
                    ROUTE(fromField='value_changed',fromNode='ShootShockInterpolator',toField='set_translation',toNode='ShootShockTransform')])])])]),
            WorldInfo(info=["null node"])])])])),
    #  ==================== 
    Background(skyColor=[(0.604,0.753,0.804)]),
    Anchor(description='RifleM24Example',parameter=["target=_blank"],url=["RifleM24Example.x3d","../../Weapons/SmallArms/RifleM24Example.x3d","https://savage.nps.edu/Savage/Weapons/SmallArms/RifleM24Example.x3d","../../Weapons/SmallArms/RifleM24Example.wrl","RifleM24Example.wrl","https://savage.nps.edu/Savage/Weapons/SmallArms/RifleM24Example.wrl"],
      children=[
      Shape(
        geometry=Text(string=["RifleM24Prototype","is a prototype definition file","","To see an example scene","click on this text and view","RifleM24Example"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(0.819608,0,0.023529))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RifleM24Prototype.py")
