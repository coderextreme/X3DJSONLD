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
    GeoViewpoint(description='GeoViewpoint_3_42',geoSystem=['GDC'],position=(3.3890484551644233,100.87606259915093,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(3.3890484551644233,100.87606259915093,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca8-4.x3d'],child2Url=['../../tiles/4/Malacca8-5.x3d'],child3Url=['../../tiles/4/Malacca9-4.x3d'],child4Url=['../../tiles/4/Malacca9-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca4-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.070985940057265,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[0,4,0,0,2,-1,7,0,6,-2,-2,-2,-2,-2,1,0,0,1,2,2,4,4,1,2,2,2,-4,-1,-2,2,7,-2,-2,-2,-2,-2,0,0,2,0,-1,9,6,1,1,0,1,1,6,-2,-5,2,-18,5,-2,-2,-2,0,0,2,1,0,0,-1,0,0,0,1,0,2,1,5,1,10,-27,-1,-2,-2,0,0,4,0,-1,0,0,0,0,2,2,0,0,1,2,0,-4,0,3,20,-18,-2,0,0,2,0,1,0,0,0,-1,0,1,1,2,1,0,1,2,0,7,-4,8,0,0,0,3,2,0,1,2,2,2,0,2,3,3,0,0,3,2,3,0,11,4,0,0,0,0,0,0,2,1,2,0,0,1,2,1,0,2,1,1,2,0,2,3,0,1,0,0,1,0,0,2,1,2,2,1,0,1,0,1,1,1,1,1,0,1,0,0,2,0,2,1,1,0,0,1,3,1,1,0,1,0,0,1,1,1,1,0,0,6,0,0,2,3,3,1,2,6,5,0,0,0,1,1,0,0,1,0,1,0,4,1,1,0,0,1,3,0,0,5,11,0,2,0,0,0,1,1,0,2,2,1,0,-1,1,3,1,-1,2,8,9,9,10,3,0,0,1,2,1,2,0,0,0,0,0,1,1,1,1,1,1,5,8,7,5,0,1,1,2,2,1,3,1,0,0,3,2,0,1,1,0,0,1,3,5,6,12,0,1,2,1,0,2,2,0,1,1,0,0,3,2,1,1,2,7,2,3,22,23,1,0,2,1,2,0,0,3,2,3,1,1,0,1,2,1,8,2,6,18,19,21,1,1,0,0,0,2,0,1,1,1,0,1,2,1,1,3,2,3,17,13,19,22,1,1,1,1,2,2,3,1,0,4,2,1,1,2,2,3,4,22,18,15,15,19,0,1,0,1,1,2,1,3,2,1,1,1,2,0,2,8,4,24,18,21,16,24,0,1,1,1,2,3,1,1,2,1,1,1,2,2,3,3,22,21,22,19,24,23,0,0,1,3,3,2,3,0,0,0,0,1,1,1,4,3,26,22,23,18,21,24,0,0,2,3,1,4,2,1,1,0,1,0,2,1,5,3,25,24,26,17,21,24],
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
