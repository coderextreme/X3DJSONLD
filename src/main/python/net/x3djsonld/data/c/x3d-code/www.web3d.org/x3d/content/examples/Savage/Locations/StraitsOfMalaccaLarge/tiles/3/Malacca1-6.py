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
    GeoViewpoint(description='GeoViewpoint_3_16',geoSystem=['GDC'],position=(-4.689706692856765,105.95125062410463,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(-4.689706692856765,105.95125062410463,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca2-12.x3d'],child2Url=['../../tiles/4/Malacca2-13.x3d'],child3Url=['../../tiles/4/Malacca3-12.x3d'],child4Url=['../../tiles/4/Malacca3-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca1-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-5.69708174070451,104.94050057609658,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[0,31,369,4,2,1,2,72,44,4,6,10,2,1,1,2,2,2,2,3,1,1,306,387,14,-4,4,54,44,19,0,3,4,4,1,3,2,2,1,2,2,2,2,2,174,326,749,222,-22,102,33,7,12,7,5,3,1,1,1,2,1,1,2,1,2,2,114,115,356,189,190,86,32,41,115,3,4,2,2,1,3,2,1,1,3,1,1,3,124,126,105,97,63,52,15,75,48,2,2,2,2,2,0,1,1,2,2,1,1,0,129,94,86,61,52,45,61,62,21,3,2,4,1,3,3,2,0,2,1,1,1,0,155,71,51,50,52,67,45,30,16,28,2,2,1,3,2,3,2,1,1,2,1,1,80,55,48,33,46,27,12,34,21,24,0,2,2,3,3,4,3,1,3,2,4,3,61,51,45,41,34,24,33,37,19,27,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,47,42,37,29,32,19,25,19,23,24,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,33,33,31,32,9,22,28,22,20,8,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,21,25,29,29,28,30,5,14,19,4,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,23,7,35,6,35,5,3,16,3,22,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,17,12,10,24,5,13,20,12,15,4,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,58,46,22,11,5,2,3,2,5,5,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,33,33,63,38,10,3,1,9,2,8,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,37,14,31,22,15,3,5,3,6,3,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,33,30,13,16,22,17,3,7,2,2,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,27,23,13,4,15,12,3,4,4,7,6,2,3,3,4,3,3,3,2,3,2,1,20,24,11,8,4,6,6,15,31,9,5,4,4,3,2,4,3,2,3,2,0,2,17,24,7,7,7,25,10,26,15,4,3,4,5,3,4,4,3,3,3,1,2,0,16,24,8,6,7,23,10,27,12,5,2,4,4,2,3,3,4,3,2,2,4,0],
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
