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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='Mast.x3d',name='title'),
    meta(content='Brazilian Naval Academy Training Ship',name='description'),
    meta(content='Claudio Coreixas',name='creator'),
    meta(content='20 October 2009',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='http://www.en.mar.mil.br',name='reference'),
    meta(content='ships',name='subject'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNavalAcademyBrazil/Mast.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Shape(DEF='pillar1',
        geometry=Extrusion(ccw=False,convex=False,crossSection=[(0.000,0.023),(0.011,0.020),(0.020,0.011),(0.023,0.000),(0.020,-0.011),(0.011,-0.020),(0.000,-0.023),(-0.011,-0.020),(-0.020,-0.011),(-0.023,0.000),(-0.020,0.011),(-0.011,0.020),(0.000,0.023)],solid=False,spine=[(5.35,2.6,0),(5.15,3.625,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.82,0.78,0.74)))),
      Shape(DEF='pillar2',
        geometry=Extrusion(ccw=False,convex=False,crossSection=[(0.000,0.023),(0.011,0.020),(0.020,0.011),(0.023,0.000),(0.020,-0.011),(0.011,-0.020),(0.000,-0.023),(-0.011,-0.020),(-0.020,-0.011),(-0.023,0.000),(-0.020,0.011),(-0.011,0.020),(0.000,0.023)],solid=False,spine=[(4.95,2.6,0),(4.95,3.625,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.82,0.78,0.74)))),
      Shape(DEF='pillar3',
        geometry=Extrusion(ccw=False,convex=False,crossSection=[(0.000,0.023),(0.011,0.020),(0.020,0.011),(0.023,0.000),(0.020,-0.011),(0.011,-0.020),(0.000,-0.023),(-0.011,-0.020),(-0.020,-0.011),(-0.023,0.000),(-0.020,0.011),(-0.011,0.020),(0.000,0.023)],solid=False,spine=[(4.95,2.6,0.3),(4.95,3.625,0.063)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.82,0.78,0.74)))),
      Shape(DEF='pillar4',
        geometry=Extrusion(ccw=False,convex=False,crossSection=[(0.000,0.023),(0.011,0.020),(0.020,0.011),(0.023,0.000),(0.020,-0.011),(0.011,-0.020),(0.000,-0.023),(-0.011,-0.020),(-0.020,-0.011),(-0.023,0.000),(-0.020,0.011),(-0.011,0.020),(0.000,0.023)],solid=False,spine=[(4.95,2.6,-0.3),(4.95,3.625,-0.063)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.82,0.78,0.74)))),
      Shape(DEF='pillar5',
        geometry=Extrusion(ccw=False,convex=False,crossSection=[(0.000,0.023),(0.011,0.020),(0.020,0.011),(0.023,0.000),(0.020,-0.011),(0.011,-0.020),(0.000,-0.023),(-0.011,-0.020),(-0.020,-0.011),(-0.023,0.000),(-0.020,0.011),(-0.011,0.020),(0.000,0.023)],solid=False,spine=[(5.25,3.1,0),(4.95,3.1,0.175)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.82,0.78,0.74)))),
      Shape(DEF='pillar6',
        geometry=Extrusion(ccw=False,convex=False,crossSection=[(0.000,0.023),(0.011,0.020),(0.020,0.011),(0.023,0.000),(0.020,-0.011),(0.011,-0.020),(0.000,-0.023),(-0.011,-0.020),(-0.020,-0.011),(-0.023,0.000),(-0.020,0.011),(-0.011,0.020),(0.000,0.023)],solid=False,spine=[(5.25,3.1,0),(4.95,3.1,-0.175)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.82,0.78,0.74)))),
      Shape(DEF='pillar7',
        geometry=Extrusion(ccw=False,convex=False,crossSection=[(0.000,0.023),(0.011,0.020),(0.020,0.011),(0.023,0.000),(0.020,-0.011),(0.011,-0.020),(0.000,-0.023),(-0.011,-0.020),(-0.020,-0.011),(-0.023,0.000),(-0.020,0.011),(-0.011,0.020),(0.000,0.023)],solid=False,spine=[(5.25,3.1,0),(4.95,2.6,0.3)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.82,0.78,0.74)))),
      Shape(DEF='pillar8',
        geometry=Extrusion(ccw=False,convex=False,crossSection=[(0.000,0.023),(0.011,0.020),(0.020,0.011),(0.023,0.000),(0.020,-0.011),(0.011,-0.020),(0.000,-0.023),(-0.011,-0.020),(-0.020,-0.011),(-0.023,0.000),(-0.020,0.011),(-0.011,0.020),(0.000,0.023)],solid=False,spine=[(5.25,3.1,0),(4.95,2.6,-0.3)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.82,0.78,0.74)))),
      Shape(DEF='pillar9',
        geometry=Extrusion(ccw=False,convex=False,crossSection=[(0.000,0.023),(0.011,0.020),(0.020,0.011),(0.023,0.000),(0.020,-0.011),(0.011,-0.020),(0.000,-0.023),(-0.011,-0.020),(-0.020,-0.011),(-0.023,0.000),(-0.020,0.011),(-0.011,0.020),(0.000,0.023)],solid=False,spine=[(5.25,3.1,0),(4.95,3.625,0.063)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.82,0.78,0.74)))),
      Shape(DEF='pillar10',
        geometry=Extrusion(ccw=False,convex=False,crossSection=[(0.000,0.023),(0.011,0.020),(0.020,0.011),(0.023,0.000),(0.020,-0.011),(0.011,-0.020),(0.000,-0.023),(-0.011,-0.020),(-0.020,-0.011),(-0.023,0.000),(-0.020,0.011),(-0.011,0.020),(0.000,0.023)],solid=False,spine=[(5.25,3.1,0),(4.95,3.625,-0.063)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.82,0.78,0.74)))),
      Shape(DEF='base',
        geometry=Extrusion(ccw=False,convex=False,crossSection=[(4.85,0),(4.851,0.1),(4.854,0.11125),(4.862,0.1195),(4.873,0.1225),(5.327,0.123),(5.327,0.1225),(5.338,0.1195),(5.347,0.11125),(5.350,0.1),(5.35,-0.1),(5.350,-0.1),(5.347,-0.11125),(5.338,-0.1195),(5.327,-0.1225),(4.873,-0.1225),(4.870,-0.1195),(4.861,-0.11125),(4.850,-0.1),(4.850,0)],solid=False,spine=[(0,3.625,0),(0,3.63,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.82,0.78,0.74)))),
      Shape(DEF='pillar11',
        geometry=Extrusion(ccw=False,convex=False,crossSection=[(0.000,0.023),(0.011,0.020),(0.020,0.011),(0.023,0.000),(0.020,-0.011),(0.011,-0.020),(0.000,-0.023),(-0.011,-0.020),(-0.020,-0.011),(-0.023,0.000),(-0.020,0.011),(-0.011,0.020),(0.000,0.023)],solid=False,spine=[(4.95,3.1,0.175),(4.95,3.1,-0.175)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.82,0.78,0.74)))),
      Shape(DEF='yardboomPort',
        geometry=Extrusion(ccw=False,convex=False,crossSection=[(0.000,0.013),(0.006,0.013),(0.011,0.008),(0.013,0.000),(0.011,-0.008),(0.006,-0.013),(0.000,-0.015),(-0.006,-0.013),(-0.011,-0.008),(-0.013,0.000),(-0.011,0.008),(-0.006,0.013),(0.000,0.015)],solid=False,spine=[(4.95,3.6,-0.063),(4.7,3.6,-0.5)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.82,0.78,0.74)))),
      Shape(DEF='yardboomStb',
        geometry=Extrusion(ccw=False,convex=False,crossSection=[(0.000,0.013),(0.006,0.013),(0.011,0.008),(0.013,0.000),(0.011,-0.008),(0.006,-0.013),(0.000,-0.015),(-0.006,-0.013),(-0.011,-0.008),(-0.013,0.000),(-0.011,0.008),(-0.006,0.013),(0.000,0.015)],solid=False,spine=[(4.95,3.6,0.063),(4.7,3.6,0.5)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.82,0.78,0.74)))),
      Shape(DEF='pillarDF',
        geometry=Extrusion(ccw=False,convex=False,crossSection=[(0,0.013),(0.006,0.013),(0.011,0.008),(0.013,0),(0.011,-0.008),(0.006,-0.013),(0,-0.015),(-0.006,-0.013),(-0.011,-0.008),(-0.013,0),(-0.011,0.008),(-0.006,0.013),(0,0.015)],scale=[(1,1),(0.6,0.6),(0.6,0.6),(0.03,0.03)],solid=False,spine=[(4.875,3.625,0),(4.875,4.15,0),(4.875,4.325,0),(4.875,4.425,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.82,0.78,0.74)))),
      Shape(DEF='arrayDF1',
        geometry=Extrusion(ccw=False,convex=False,crossSection=[(0.000,0.013),(0.006,0.013),(0.011,0.008),(0.013,0.000),(0.011,-0.008),(0.006,-0.013),(0.000,-0.015),(-0.006,-0.013),(-0.011,-0.008),(-0.013,0.000),(-0.011,0.008),(-0.006,0.013),(0.000,0.015)],solid=False,spine=[(4.96250,4.2375,0),(4.95952,4.2601,0),(4.95078,4.2813,0),(4.93687,4.2994,0),(4.91875,4.3133,0),(4.89765,4.3220,0),(4.87500,4.3250,0),(4.85235,4.3220,0),(4.83125,4.3133,0),(4.81313,4.2994,0),(4.79922,4.2813,0),(4.79048,4.2601,0),(4.78750,4.2375,0),(4.79048,4.2149,0),(4.79922,4.1938,0),(4.81313,4.1756,0),(4.83125,4.1617,0),(4.85235,4.1530,0),(4.87500,4.1500,0),(4.89765,4.1530,0),(4.91875,4.1617,0),(4.93687,4.1756,0),(4.95078,4.1938,0),(4.95952,4.2149,0),(4.96250,4.2375,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1)))),
      Shape(DEF='arrayDF2',
        geometry=Extrusion(ccw=False,convex=False,crossSection=[(0.000,0.013),(0.006,0.013),(0.011,0.008),(0.013,0.000),(0.011,-0.008),(0.006,-0.013),(0.000,-0.015),(-0.006,-0.013),(-0.011,-0.008),(-0.013,0.000),(-0.011,0.008),(-0.006,0.013),(0.000,0.015)],solid=False,spine=[(4.875,4.2375,0.08750),(4.875,4.2601,0.08452),(4.875,4.2813,0.07578),(4.875,4.2994,0.06187),(4.875,4.3133,0.04375),(4.875,4.3220,0.02265),(4.875,4.3250,0.00000),(4.875,4.3220,-0.02265),(4.875,4.3133,-0.04375),(4.875,4.2994,-0.06187),(4.875,4.2813,-0.07578),(4.875,4.2601,-0.08452),(4.875,4.2375,-0.08750),(4.875,4.2149,-0.08452),(4.875,4.1938,-0.07578),(4.875,4.1756,-0.06187),(4.875,4.1617,-0.04375),(4.875,4.1530,-0.02265),(4.875,4.1500,0.00000),(4.875,4.1530,0.02265),(4.875,4.1617,0.04375),(4.875,4.1756,0.06187),(4.875,4.1938,0.07578),(4.875,4.2149,0.08452),(4.875,4.2375,0.08750)]),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Mast.py")
