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
    GeoViewpoint(description='GeoViewpoint_2_13',geoSystem=['GDC'],position=(-1.6675815493135304,106.96200067211268,448023.77127998613),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(-1.6675815493135304,106.96200067211268,0.0),range=537628.5,child1Url=['../../tiles/3/Malacca2-6.x3d'],child2Url=['../../tiles/3/Malacca2-7.x3d'],child3Url=['../../tiles/3/Malacca3-6.x3d'],child4Url=['../../tiles/3/Malacca3-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca1-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-3.68233164500902,104.94050057609658,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.20215002,zDimension=22,zSpacing=0.19188096,height=[18,12,6,11,6,3,3,3,4,4,1,0,3,4,2,1,4,1,0,1,1,19,29,13,32,5,3,2,4,5,2,2,4,2,2,2,3,1,2,0,0,3,12,12,6,6,5,3,4,2,3,0,2,2,2,2,1,3,3,4,0,2,0,7,28,13,6,5,6,4,3,7,2,3,3,0,-1,12,18,4,2,0,2,1,13,7,5,12,11,4,3,34,6,3,2,2,-1,18,31,25,20,2,0,6,0,5,6,10,6,6,21,34,41,27,1,1,0,2,1,45,26,13,3,4,1,2,3,5,5,6,6,19,19,17,0,2,1,2,2,2,2,2,1,4,3,4,3,4,0,4,4,2,38,48,3,2,0,2,2,1,2,3,1,1,2,4,3,1,5,2,14,0,5,38,3,2,2,0,0,1,3,3,3,0,2,2,3,1,0,2,2,39,22,19,37,104,4,1,1,2,-99,-99,-99,-99,-99,4,3,2,1,1,1,1,0,20,0,23,1,0,2,3,2,-99,-99,-99,-99,-99,2,2,3,217,1,2,2,2,0,0,1,0,1,3,3,2,-99,-99,-99,-99,-99,3,2,3,2,3,2,0,1,0,1,1,2,1,2,2,2,-99,-99,-99,-99,-99,2,2,0,2,5,1,2,2,0,1,1,1,0,2,2,3,-99,-99,-99,-99,-99,0,2,2,4,2,4,3,2,1,1,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,3,2,2,2,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,1,3,4,3,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,5,3,1,1,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,5,3,2,2,5,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,6,-99,-99,-99,-99,-99,0,2,3,2,2,3,2,2,1,3,3,1,0,1,0,3,-99,-99,-99,-99,-99,3,0,2,2,3,1,0,1,2,1,0,-1,0,0,4,3,-99,-99,-99,-99,-99,2,1,1,1,3,0,1,1,2,1,3,0,0,0,2],
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
