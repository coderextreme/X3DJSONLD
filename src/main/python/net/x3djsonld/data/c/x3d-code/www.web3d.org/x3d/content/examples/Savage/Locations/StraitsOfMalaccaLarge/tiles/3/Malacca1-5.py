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
    GeoViewpoint(description='GeoViewpoint_3_15',geoSystem=['GDC'],position=(-4.689706692856765,103.92975052808853,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(-4.689706692856765,103.92975052808853,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca2-10.x3d'],child2Url=['../../tiles/4/Malacca2-11.x3d'],child3Url=['../../tiles/4/Malacca3-10.x3d'],child4Url=['../../tiles/4/Malacca3-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca1-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-5.69708174070451,102.91900048008048,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[2,0,0,1,1,2,2,3,3,3,1,1,2,2,2,0,141,164,1,0,3,0,1,0,2,0,1,3,2,2,2,2,1,1,2,2,4,94,368,1,5,56,190,306,2,2,0,2,2,1,3,2,2,2,3,1,2,2,236,528,9,6,64,471,191,174,3,2,2,1,2,2,3,3,3,1,2,2,12,193,396,90,212,690,667,258,124,114,3,0,2,3,2,1,2,1,3,1,2,30,133,466,289,535,1317,748,326,185,138,124,0,1,2,3,2,2,2,3,3,2,11,133,482,978,424,652,993,599,325,357,127,129,-1,0,1,2,3,6,3,3,2,4,186,637,855,572,1519,879,868,765,535,230,88,155,2,0,1,5,5,5,4,3,3,380,760,1013,838,983,1171,878,918,983,496,104,91,80,0,3,4,4,6,4,4,223,318,790,543,659,1160,1135,977,863,422,311,133,52,76,61,4,5,6,6,0,93,207,471,650,1131,551,736,776,966,711,771,212,176,105,42,29,47,1,-1,4,4,124,253,419,1103,1210,430,549,437,396,370,267,250,144,150,74,54,32,33,2,-4,3,87,81,454,1013,1048,595,405,213,220,209,244,202,156,99,119,53,30,21,21,3,42,124,181,256,391,813,1004,723,370,226,208,140,140,141,96,69,67,72,50,30,23,58,51,140,372,505,1033,1598,1509,1061,473,366,259,239,117,124,70,44,73,48,55,24,17,91,208,454,1396,2305,2298,1652,1976,901,681,294,171,108,127,112,94,89,50,25,43,59,58,161,337,916,1497,1648,1707,1466,1354,1021,762,775,122,68,68,90,105,74,62,69,62,31,33,852,812,865,1100,931,1131,996,806,605,252,372,95,64,57,70,57,66,65,47,44,55,37,1010,1869,2367,848,740,435,451,1066,541,323,237,137,92,57,44,49,52,65,40,40,29,33,830,570,700,849,1001,698,198,631,446,131,147,121,105,76,73,44,47,46,50,47,29,27,358,339,686,573,285,222,146,96,324,83,112,107,89,70,48,49,29,40,27,29,21,20,519,298,125,135,104,133,155,81,73,72,89,83,73,69,45,33,22,22,24,20,22,17,496,292,123,137,104,131,151,98,74,70,90,83,74,74,44,41,22,22,23,21,20,16],
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
