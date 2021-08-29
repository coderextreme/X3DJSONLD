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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_24',geoSystem=['GDC'],position=(26.00937491632225,56.48224529143444,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.00937491632225,56.48224529143444,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small4-8.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small4-9.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small5-8.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small5-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small2-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.8972799768378,56.33160427093061,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[889,800,1107,363,635,170,0,1,4,7,-4,0,-3,-3,12,0,7,-9,12,-1,5,6,375,691,1015,891,366,47,1,-2,2,-6,0,2,-3,-5,1,1,-5,7,-6,-7,0,-1,361,424,375,867,86,-8,2,1,5,4,0,3,-2,12,-1,5,0,4,3,12,0,-6,1094,335,226,124,202,0,-1,0,2,0,-7,1,-2,8,1,-5,10,-1,1,0,0,1,1097,623,513,100,175,22,153,141,2,1,0,5,-1,3,4,-5,-2,-7,0,0,2,1,1132,1039,563,84,108,127,6,6,37,4,-5,-1,0,0,2,-3,0,-2,-1,-1,0,0,1141,1142,593,215,206,27,7,-8,1,-4,-1,0,-1,0,2,0,1,-1,1,0,-2,-1,1176,1282,665,807,114,156,19,6,0,6,0,1,-1,0,0,0,0,0,-1,-3,-3,-2,1311,1396,625,770,440,24,-28,0,-2,0,-1,0,0,1,0,0,-1,-4,2,-2,-2,-3,949,1281,1291,816,753,685,9,0,-2,1,0,-2,0,2,0,0,-2,1,-2,-3,-1,-2,885,1338,1272,946,546,617,486,18,1,0,0,0,-2,0,-1,-3,-3,2,-1,-3,-1,-2,885,1059,1115,433,130,526,547,-1,0,0,-1,-1,0,-2,0,0,-3,-4,0,0,-2,-3,468,622,577,362,7,319,396,5,0,0,0,0,1,-2,-2,0,-4,0,-2,-2,0,-2,195,212,211,430,24,0,-10,-4,-2,-3,0,0,-3,0,-1,-4,-2,-1,-7,-4,-1,0,175,188,196,377,10,22,9,-1,7,-5,-1,0,1,-2,-2,0,-3,-2,-5,-1,-2,-4,160,167,174,186,234,206,412,371,-1,0,0,1,-2,-1,-3,-4,-2,-3,-1,-5,0,0,144,338,589,509,644,636,610,450,-7,0,0,-3,-1,-4,-3,-4,0,-2,-1,-3,0,-3,142,147,619,801,637,233,644,435,540,-3,0,-3,0,0,-4,-4,-2,-1,0,-2,0,2,255,273,628,21,164,221,8,74,363,48,3,-1,-1,-5,-5,-2,-4,0,0,0,0,2,86,395,182,-2,105,135,-11,-3,-3,-1,-1,-2,-5,-5,-2,0,0,-1,-1,2,-1,1,88,18,343,-11,-5,-2,-5,-2,-3,-2,-12,0,-5,-6,-2,0,-1,1,3,1,0,0,93,14,336,-14,-3,-1,-4,-2,-3,-2,-13,0,-3,-4,-3,-2,0,1,4,3,0,0],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
