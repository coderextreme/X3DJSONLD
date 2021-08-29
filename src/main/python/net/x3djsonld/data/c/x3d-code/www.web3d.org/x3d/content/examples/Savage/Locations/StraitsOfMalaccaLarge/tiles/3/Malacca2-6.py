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
    GeoViewpoint(description='GeoViewpoint_3_26',geoSystem=['GDC'],position=(-2.674956597161276,105.95125062410463,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(-2.674956597161276,105.95125062410463,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca4-12.x3d'],child2Url=['../../tiles/4/Malacca4-13.x3d'],child3Url=['../../tiles/4/Malacca5-12.x3d'],child4Url=['../../tiles/4/Malacca5-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca2-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-3.6823316450090204,104.94050057609658,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[16,24,8,6,7,23,10,27,12,5,2,4,4,2,3,3,4,3,2,2,4,0,14,18,11,6,23,35,27,11,4,6,4,3,3,3,5,2,3,2,3,2,1,0,13,19,31,9,14,14,34,15,4,3,1,2,2,3,4,5,5,3,2,1,2,2,15,9,16,11,8,6,8,11,7,4,2,2,3,3,3,3,3,3,3,3,0,2,11,8,11,14,6,6,7,5,5,5,11,1,2,1,3,1,1,3,0,2,1,2,6,8,21,15,11,7,6,5,6,6,6,5,2,1,1,3,1,3,0,2,2,3,10,22,45,10,15,13,7,4,6,7,8,4,2,2,3,2,5,1,1,0,3,2,7,6,10,7,7,9,7,6,6,6,6,4,5,2,1,1,31,22,5,37,1,2,6,8,6,7,6,6,12,11,11,7,5,2,3,5,6,5,12,2,-13,10,1,2,8,4,7,7,8,16,13,12,8,7,4,6,6,23,34,29,23,9,1,2,0,2,4,8,5,5,9,9,6,7,6,8,15,9,41,53,23,38,29,11,2,1,3,1,5,5,6,5,5,7,8,1,7,6,182,37,40,57,47,56,93,36,11,0,3,2,3,4,5,6,4,4,6,2,5,3,-13,5,39,8,17,8,1,2,1,2,1,2,3,12,10,4,7,21,16,4,2,5,21,5,37,9,3,3,1,1,1,1,1,2,4,4,0,0,3,4,3,3,3,11,22,50,49,5,3,2,2,1,0,0,3,2,4,4,1,0,0,3,3,2,3,9,20,36,45,2,1,3,2,2,2,0,2,1,3,3,1,0,6,15,0,12,5,24,32,18,6,2,3,2,3,3,2,1,1,2,4,4,27,61,57,26,7,13,29,31,37,7,8,1,2,4,2,3,1,1,0,0,1,2,1,0,47,22,33,19,24,45,32,18,21,4,3,3,1,1,1,2,3,5,2,0,0,2,0,10,16,30,10,11,9,46,1,2,2,1,1,2,2,3,1,1,2,1,1,0,1,18,27,13,0,37,35,18,2,0,2,1,2,3,3,3,0,1,2,1,1,0,4,18,25,13,3,35,39,18,0,0,1,1,2,3,3,2,1,1],
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
