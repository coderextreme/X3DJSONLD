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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='SeaStarGroup.x3d',name='title'),
    meta(content='SeaStar used in the kelp forest project',name='description'),
    meta(content='Karl Tenney',name='creator'),
    meta(content='Scott Tufts',name='translator'),
    meta(content='1 June 1998',name='created'),
    meta(content='13 December 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://x3dgraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SeaStarGroup.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(DEF='Stars',
      children=[
      LOD(range=[25],
        children=[
        Transform(rotation=(0.00284295,-0.117658,-0.99305,1.40621),scale=(0.501645,0.501645,0.501645),scaleOrientation=(0.599706,0.727936,-0.332359,0.508576),translation=(-0.812513,0.185385,-0.905324),
          children=[
          Transform(rotation=(0.749116,-0.639071,0.174397,2.97944),scaleOrientation=(0.49262,-0.0627393,-0.86798,0.83046),translation=(-0.792837,0.269129,-1.06333),
            children=[
            Transform(DEF='_O',scale=(0.659575,0.659575,0.659575),translation=(0.609729,0.00350194,-0.205184),
              children=[
              Transform(rotation=(-1.14191e-007,-1,-5.32201e-006,0.814114),scale=(0.0276058,0.0102856,0.0774523),translation=(-0.0454274,0.0102855,0.0416858),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(DEF='_1',ambientIntensity=0.25)),
                  geometry=Sphere(),)]),
              Transform(rotation=(1.6646e-007,1,6.79179e-007,0.915243),scale=(0.0276058,0.0102856,0.118301),translation=(-0.0731081,0.0102856,-0.047631),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(USE='_1')),
                  geometry=Sphere(),)]),
              Transform(scale=(0.0276058,0.0102856,0.118301),translation=(-1.21519e-009,0.0102856,-0.086997),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(USE='_1')),
                  geometry=Sphere(),)]),
              Transform(rotation=(7.02699e-008,1,-9.67549e-009,4.71239),scale=(0.0276058,0.0102856,0.118301),translation=(0.0943676,0.0102856,-9.2235e-010),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(USE='_1')),
                  geometry=Sphere(),)]),
              Transform(rotation=(-2.28035e-007,1,-1.9708e-007,0.399743),scale=(0.0276058,0.0102856,0.118301),translation=(0.0273156,0.0102856,0.0869062),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(USE='_1')),
                  geometry=Sphere(),)]),
              Transform(rotation=(1.74007e-006,-1,-1.7261e-007,0.240595),scale=(0.0564878,0.00994367,0.0245735),translation=(-0.12392,0.00994368,0.0707975),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(USE='_1')),
                  geometry=Sphere(),)])])]),
          Transform(rotation=(0.00284286,-0.117657,-0.99305,1.40621),scaleOrientation=(0.510123,-0.709858,0.48567,0.155947),translation=(-1.13874,1.52467,-0.123565),
            children=[
            Transform(USE='_O')]),
          Transform(rotation=(0.528326,0.818819,0.224514,3.53479),scaleOrientation=(0.448831,0.876981,-0.171628,1.58567),translation=(-0.629386,0.0675117,-1.5183),
            children=[
            Transform(USE='_O')]),
          Transform(rotation=(0.486797,0.486306,0.725628,4.34197),scaleOrientation=(0.0307922,0.0594577,0.997756,3.92155),translation=(-0.80193,0.586843,-0.848469),
            children=[
            Transform(USE='_O')]),
          Transform(rotation=(0.0028429,-0.117657,-0.99305,1.40621),scale=(0.521406,0.521406,0.521406),scaleOrientation=(0.973919,-0.14782,-0.172137,0.289729),translation=(-0.861705,-0.0343103,0.030513),
            children=[
            Transform(DEF='_2',rotation=(0.00284286,-0.117657,-0.99305,1.40621),scaleOrientation=(0.510123,-0.709858,0.48567,0.155947),translation=(-0.85937,0.397126,-0.511331),
              children=[
              Transform(rotation=(0.48655,0.87342,-0.0201627,1.21112),scale=(0.709989,0.709989,0.709989),translation=(-0.194527,-0.18028,0.656123),
                children=[
                Transform(scale=(0.659575,0.659575,0.659575),translation=(0.609729,0.00350194,-0.205184),
                  children=[
                  Transform(rotation=(-1.14191e-007,-1,-5.32201e-006,0.814114),scale=(0.0276058,0.0102856,0.0774523),translation=(-0.0454274,0.0102855,0.0416858),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(DEF='_3',ambientIntensity=0.25,diffuseColor=(0.8,0.51,0.09),shininess=0.4,specularColor=(0.92,0.43,0.01))),
                      geometry=Sphere(),)]),
                  Transform(rotation=(1.6646e-007,1,6.79179e-007,0.915243),scale=(0.0276058,0.0102856,0.118301),translation=(-0.0731081,0.0102856,-0.047631),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(USE='_3')),
                      geometry=Sphere(),)]),
                  Transform(scale=(0.0276058,0.0102856,0.118301),translation=(-1.21519e-009,0.0102856,-0.086997),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(USE='_3')),
                      geometry=Sphere(),)]),
                  Transform(rotation=(7.02699e-008,1,-9.67549e-009,4.71239),scale=(0.0276058,0.0102856,0.118301),translation=(0.0943676,0.0102856,-9.2235e-010),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(USE='_3')),
                      geometry=Sphere(),)]),
                  Transform(rotation=(-2.28035e-007,1,-1.9708e-007,0.399743),scale=(0.0276058,0.0102856,0.118301),translation=(0.0273156,0.0102856,0.0869062),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(USE='_3')),
                      geometry=Sphere(),)]),
                  Transform(rotation=(1.74007e-006,-1,-1.7261e-007,0.240595),scale=(0.0564878,0.00994367,0.0245735),translation=(-0.12392,0.00994368,0.0707975),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(USE='_3')),
                      geometry=Sphere(),)])])])]),
            Transform(rotation=(0.758872,-0.613643,-0.218072,3.62512),scaleOrientation=(0.183361,0.515897,-0.836797,0.680897),translation=(-0.785972,-0.272973,0.109283),
              children=[
              Transform(USE='_2')]),
            Transform(rotation=(0.0160324,0.999622,0.0223337,0.494856),scale=(0.0564878,0.00994367,0.0245735),translation=(-0.359698,0.00994363,1.36377),
              children=[
              Shape(DEF='SeaStar_leg_4',
                appearance=Appearance(
                  material=Material(DEF='_4',ambientIntensity=0.252747,diffuseColor=(0.91,0.44,0.35),specularColor=(0.35,0.14,0))),
                geometry=Sphere(),)]),
            Transform(scale=(0.0276058,0.0102856,0.0691647),translation=(-0.45535,0.0102856,1.22615),
              children=[
              Shape(USE='SeaStar_leg_4')]),
            Transform(rotation=(6.36314e-008,1,-7.41821e-009,0.631741),scale=(0.0276058,0.0102856,0.0691647),translation=(-0.426702,0.0102856,1.34188),
              children=[
              Shape(USE='SeaStar_leg_4')]),
            Transform(rotation=(-2.40082e-007,-1,3.43709e-007,0.712123),scale=(0.0276058,0.0102856,0.0691647),translation=(-0.5,0.0102856,1.32509),
              children=[
              Shape(USE='SeaStar_leg_4')]),
            Transform(rotation=(1.85515e-008,-1,-1.05709e-007,0.919461),scale=(0.0276058,0.0102856,0.0691647),translation=(-0.39858,0.0102856,1.25),
              children=[
              Shape(USE='SeaStar_leg_4')]),
            Transform(rotation=(3.53588e-007,1,1.0134e-006,0.84627),scale=(0.0276058,0.0102856,0.0691647),translation=(-0.5,0.0102858,1.25),
              children=[
              Shape(USE='SeaStar_leg_4')]),
            Transform(rotation=(1.48158e-008,1,-3.7903e-008,1.57079),scale=(0.0564878,0.00994367,0.0245735),translation=(-0.364396,0.00994358,1.19351),
              children=[
              Shape(USE='SeaStar_leg_4')]),
            Transform(
              children=[
              Transform(scale=(0.0564878,0.00994367,0.0245735),translation=(-0.569653,0.00994355,1.21309),
                children=[
                Shape(USE='SeaStar_leg_4')]),
              Transform(rotation=(4.05455e-007,-1,1.915e-007,1.02836),scale=(0.0564878,0.00994367,0.0245735),translation=(-0.464063,0.00994362,1.1596),
                children=[
                Shape(USE='SeaStar_leg_4')]),
              Transform(rotation=(-5.59581e-009,-1,-9.59606e-009,0.878147),scale=(0.0564878,0.00994367,0.0245735),translation=(-0.510391,0.00994369,1.40221),
                children=[
                Shape(USE='SeaStar_leg_4')])])]),
          Transform(DEF='_5',translation=(0.46739,-3.72529e-009,-1.27889),
            children=[
            Transform(rotation=(0.0160324,0.999622,0.0223337,0.494856),scale=(0.0564878,0.00994367,0.0245735),translation=(-0.359698,0.00994363,1.36377),
              children=[
              Shape(DEF='_6',
                appearance=Appearance(
                  material=Material(ambientIntensity=0.252747,diffuseColor=(0.91,0.44,0.35),shininess=0.13,specularColor=(0.35,0.14,0))),
                geometry=Sphere(),)]),
            Transform(scale=(0.0276058,0.0102856,0.0691647),translation=(-0.45535,0.0102856,1.22615),
              children=[
              Shape(USE='_6')]),
            Transform(rotation=(6.36314e-008,1,-7.41821e-009,0.631741),scale=(0.0276058,0.0102856,0.0691647),translation=(-0.426702,0.0102856,1.34188),
              children=[
              Shape(USE='_6')]),
            Transform(rotation=(-2.40082e-007,-1,3.43709e-007,0.712123),scale=(0.0276058,0.0102856,0.0691647),translation=(-0.5,0.0102856,1.32509),
              children=[
              Shape(USE='_6')]),
            Transform(rotation=(1.85515e-008,-1,-1.05709e-007,0.919461),scale=(0.0276058,0.0102856,0.0691647),translation=(-0.39858,0.0102856,1.25),
              children=[
              Shape(USE='_6')]),
            Transform(rotation=(3.53588e-007,1,1.0134e-006,0.84627),scale=(0.0276058,0.0102856,0.0691647),translation=(-0.5,0.0102858,1.25),
              children=[
              Shape(USE='_6')]),
            Transform(rotation=(1.48158e-008,1,-3.7903e-008,1.57079),scale=(0.0564878,0.00994367,0.0245735),translation=(-0.364396,0.00994358,1.19351),
              children=[
              Shape(USE='_6')]),
            Transform(rotation=(0.0160324,0.999622,0.0223337,0.494856),scale=(0.0564878,0.00994367,0.0245735),translation=(-0.359698,0.00994363,1.36377),
              children=[
              Shape(USE='_6')]),
            Transform(
              children=[
              Transform(scale=(0.0564878,0.00994367,0.0245735),translation=(-0.569653,0.00994355,1.21309),
                children=[
                Shape(USE='_6')])]),
            Transform(rotation=(4.05455e-007,-1,1.915e-007,1.02836),scale=(0.0564878,0.00994367,0.0245735),translation=(-0.464063,0.00994362,1.1596),
              children=[
              Shape(USE='_6')]),
            Transform(rotation=(-5.59581e-009,-1,-9.59606e-009,0.878147),scale=(0.0564878,0.00994367,0.0245735),translation=(-0.510391,0.00994369,1.40221),
              children=[
              Shape(USE='_6')])])]),
        WorldInfo(info=["null node"])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SeaStarGroup.py")
