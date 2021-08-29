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
    GeoViewpoint(description='GeoViewpoint_3_23',geoSystem=['GDC'],position=(-2.674956597161276,99.88675033605634,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(-2.674956597161276,99.88675033605634,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca4-6.x3d'],child2Url=['../../tiles/4/Malacca4-7.x3d'],child3Url=['../../tiles/4/Malacca5-6.x3d'],child4Url=['../../tiles/4/Malacca5-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca2-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-3.6823316450090204,98.87600028804829,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,4,2,2,3,3,2,3,3,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,1,2,2,3,4,5,4,3,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,3,3,3,4,3,4,4,3,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,2,4,5,4,4,3,5,4,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,4,4,4,4,5,5,2,3,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,4,4,84,6,4,4,1,3,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,3,5,103,4,2,4,0,1,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,5,6,260,65,3,1,0,2,1,2,-99,-99,1,0,0,-6,2,3,7,1,4,8,4,7,126,2,0,2,0,3,4,4,-99,-99,2,1,3,6,1,9,10,4,0,5,41,0,-8,3,1,1,3,3,3,2,-99,-99,0,2,0,-1,2,2,4,0,1,1,164,35,2,2,2,3,1,3,2,3,-99,-99,0,6,2,9,4,2,5,3,2,7,51,2,3,4,0,4,3,2,4,3,-99,-99,6,0,0,1,0,2,2,2,4,2,5,4,2,2,0,2,1,2,3,5,-99,-99,0,0,0,0,-20,8,2,1,4,6,3,3,4,2,2,0,2,2,4,2,-99,-99,0,0,4,-16,5,-20,6,105,5,3,4,3,4,1,3,3,1,4,3,25,-99,-99,0,7,2,4,-16,65,121,3,0,3,2,2,1,7,3,4,2,3,22,16,-99,-99,7,7,7,2,4,51,134,3,3,2,2,3,2,5,4,4,5,2,6,7,-99,-99,7,7,7,7,5,7,2,4,3,1,0,0,6,4,5,4,4,3,3,22,2,2,5,5,0,4,3,2,2,2,2,5,1,3,2,4,4,5,5,5,8,10,2,2,14,21,12,3,6,4,2,3,1,5,6,3,3,3,4,4,3,2,79,300,3,152,79,36,100,8,4,2,1,1,0,14,-10,6,6,7,4,4,1,12,352,438,4,133,99,40,104,3,3,3,1,1,0,14,-10,0,8,5,2,2,0,9,360,394],
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
