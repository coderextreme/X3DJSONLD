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
    GeoViewpoint(description='GeoViewpoint_3_32',geoSystem=['GDC'],position=(2.752923424950107,100.87606259915093,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.752923424950107,100.87606259915093,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca6-4.x3d'],child2Url=['../../tiles/4/Malacca6-5.x3d'],child3Url=['../../tiles/4/Malacca7-4.x3d'],child4Url=['../../tiles/4/Malacca7-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca3-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.434860909842949,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[2,1,-1,2,3,2,3,0,0,0,2,-1,-1,0,-2,2,-1,0,-9,5,0,0,0,3,1,1,0,0,2,1,0,4,3,-1,1,-2,-3,-1,0,9,6,-1,0,0,4,5,0,5,5,3,1,1,2,2,2,-2,1,0,-6,7,-8,-10,-2,9,0,0,0,-1,5,1,0,2,2,1,-3,0,2,0,2,5,0,6,3,0,13,0,6,1,-7,-1,0,1,1,4,5,5,0,-2,2,0,0,0,-2,0,4,0,6,6,6,-20,3,-2,7,3,2,1,1,1,0,1,-2,1,3,0,5,1,0,0,0,2,-1,-2,-2,0,1,-1,0,0,2,1,2,0,8,1,-3,1,-2,1,1,0,11,-1,5,1,-3,-2,2,5,-2,3,1,3,2,3,2,7,1,2,-1,-3,12,7,0,2,0,8,0,-2,-2,-2,0,0,0,1,2,0,-1,0,2,-1,11,1,0,-11,1,0,7,3,2,-2,0,1,-1,0,-1,0,0,0,4,5,-2,0,-8,3,0,2,1,0,1,0,-1,0,0,0,0,0,-3,0,0,2,1,1,1,-1,-13,4,4,3,0,0,0,2,0,0,0,0,1,-3,-1,-2,-2,-3,0,0,2,10,0,-35,-4,0,1,1,2,1,0,0,5,2,-2,-2,1,0,-1,0,-2,-2,-8,0,0,0,3,4,4,1,2,2,3,0,4,3,0,0,-4,-2,1,-2,-1,1,-4,5,0,0,-1,0,2,6,6,1,0,0,1,0,1,3,-3,1,0,2,0,0,-1,14,3,0,2,-7,-1,2,-4,1,1,0,-1,1,-1,3,0,1,-1,-6,-8,-1,-12,-9,0,4,0,0,0,0,2,9,2,2,2,2,1,0,-2,1,3,-4,1,-4,11,16,4,-2,2,7,0,0,3,9,0,0,1,1,0,0,-3,4,0,-13,-12,-4,6,5,-1,7,0,1,-3,8,4,5,0,0,1,3,0,3,-1,-1,0,16,-24,3,10,1,-1,-1,2,4,3,11,7,9,0,1,0,-4,2,-3,1,1,4,0,6,-1,-11,5,-1,-1,-1,1,0,4,9,7,1,2,1,1,1,1,2,2,4,-2,-2,-2,-2,-2,1,1,-2,0,4,3,7,4,0,4,0,0,2,-1,7,0,6,-2,-2,-2,-2,-2,1,0,0,1,2,2,4,4],
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
