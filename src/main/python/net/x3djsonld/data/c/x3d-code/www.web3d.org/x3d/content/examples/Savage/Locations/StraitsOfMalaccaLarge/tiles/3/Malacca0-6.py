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
    GeoViewpoint(description='GeoViewpoint_3_06',geoSystem=['GDC'],position=(-6.704456788552255,105.95125062410463,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(-6.704456788552255,105.95125062410463,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca0-12.x3d'],child2Url=['../../tiles/4/Malacca0-13.x3d'],child3Url=['../../tiles/4/Malacca1-12.x3d'],child4Url=['../../tiles/4/Malacca1-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca0-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-7.7118318364,104.94050057609658,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[-99,2,3,3,3,2,2,2,2,0,0,0,0,1,0,0,1,0,0,0,0,0,-99,3,3,2,3,3,3,2,3,0,1,3,1,1,2,0,1,1,1,1,0,0,-99,1,2,3,1,4,3,4,3,1,3,2,2,1,2,4,2,3,1,1,0,1,-99,2,2,3,2,2,2,2,2,1,0,0,3,1,1,3,-2,62,21,53,27,41,-99,2,2,2,3,3,3,3,1,0,1,0,0,1,2,68,166,213,284,298,237,140,-99,1,1,2,3,4,3,3,2,1,1,0,0,1,3,105,375,401,668,370,327,336,-99,1,3,3,5,5,5,5,4,2,2,1,0,1,2,0,428,648,485,576,689,748,-99,2,1,3,4,6,27,6,5,4,4,2,2,0,1,-9,0,76,204,287,594,677,1,2,3,4,5,4,6,4,5,5,3,3,2,26,304,362,404,466,587,655,648,681,2,1,3,4,3,18,221,72,46,14,15,11,275,410,418,552,1290,679,502,631,1295,1590,1,3,3,3,72,2,1,205,91,42,60,213,357,662,639,1636,1005,843,1770,446,1056,1126,0,2,16,44,2,1,3,32,20,47,29,121,208,391,672,519,436,326,283,283,787,921,2,0,3,2,1,1,2,3,3,5,52,86,66,156,127,143,491,335,217,148,278,340,1,2,2,1,1,1,1,3,3,4,80,115,61,40,94,70,59,75,87,90,89,64,0,2,1,1,0,2,2,3,2,4,597,475,193,21,36,39,46,42,50,47,39,42,1,1,2,1,2,2,2,2,3,4,102,198,105,40,25,23,24,21,13,13,12,7,1,1,0,0,2,2,2,3,2,2,222,206,37,10,11,6,11,10,2,0,5,2,1,0,0,2,1,2,2,2,3,1,4,20,5,3,2,1,0,1,2,1,1,3,1,0,0,1,1,2,1,1,2,3,0,135,2,2,0,2,0,2,1,1,0,2,2,1,3,2,7,1,1,652,208,1,12,0,0,1,1,3,2,3,2,2,1,3,1,83,340,4,3,2,3,76,44,4,6,7,2,2,2,3,2,3,2,2,0,1,0,31,369,4,2,1,2,72,44,4,6,10,2,1,1,2,2,2,2,3,1,1],
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
