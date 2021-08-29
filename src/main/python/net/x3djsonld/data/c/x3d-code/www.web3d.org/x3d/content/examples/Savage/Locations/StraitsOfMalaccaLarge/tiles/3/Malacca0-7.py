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
    GeoViewpoint(description='GeoViewpoint_3_07',geoSystem=['GDC'],position=(-6.704456788552255,107.97275072012073,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(-6.704456788552255,107.97275072012073,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca0-14.x3d'],child2Url=['../../tiles/4/Malacca0-15.x3d'],child3Url=['../../tiles/4/Malacca1-14.x3d'],child4Url=['../../tiles/4/Malacca1-15.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca0-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-7.7118318364,106.96200067211268,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[0,1,0,2,0,0,1,2,2,39,91,169,67,144,119,73,2,34,-1,67,4,4,0,0,1,1,1,1,0,0,247,227,435,467,267,281,166,186,190,295,3,1,28,44,1,0,0,0,0,0,295,469,680,564,808,615,284,432,763,459,90,28,8,18,109,211,41,42,153,177,225,209,667,827,1362,1214,1162,593,324,415,308,196,50,7,14,66,151,195,140,286,551,607,1015,873,1261,1862,1899,1951,944,602,456,330,226,135,77,79,23,263,511,221,336,501,435,1145,1654,1878,1453,1784,1521,907,781,1545,693,1223,477,441,399,679,516,736,127,131,748,1003,1123,1526,1637,1198,871,1515,898,1181,658,1552,643,635,758,341,659,427,569,505,186,147,677,986,1011,951,1004,900,671,661,668,783,826,497,984,482,582,553,281,105,209,42,23,17,681,1111,433,585,758,654,706,689,888,936,743,467,529,287,1152,1072,305,57,16,6,7,8,1590,1024,430,261,296,607,1170,1162,1745,811,548,341,48,117,312,373,183,8,-4,2,0,1,1126,951,546,286,303,654,802,820,417,466,369,291,34,34,38,24,5,0,0,10,4,3,921,624,155,440,648,158,300,250,117,70,71,61,34,24,15,2,2,0,5,2,2,3,340,172,62,182,108,104,62,110,69,37,34,26,17,10,11,6,3,4,5,3,1,2,64,57,33,81,26,38,33,25,25,18,15,10,4,5,2,3,2,2,3,2,0,1,42,39,24,14,14,13,13,9,6,7,9,-4,1,0,1,4,3,0,3,4,3,1,7,8,10,5,6,0,3,1,0,2,2,1,2,2,0,0,1,2,2,3,1,3,2,4,4,7,3,0,0,0,1,0,0,2,0,0,2,1,2,2,1,2,2,2,3,0,2,2,2,3,0,1,1,0,0,0,1,0,2,2,2,2,2,1,2,2,2,1,1,1,1,1,1,2,0,0,0,-1,1,1,3,2,2,1,1,1,2,1,3,0,0,1,0,3,2,2,0,0,0,1,2,1,2,2,1,2,2,0,1,1,1,1,1,1,2,0,1,0,0,1,2,3,0,2,2,2,1,1,1,1,1,2,1,1,1,0,4,2,0,1,0,1,1,2,1,2,2,1,2,1,1,1,2,0],
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
