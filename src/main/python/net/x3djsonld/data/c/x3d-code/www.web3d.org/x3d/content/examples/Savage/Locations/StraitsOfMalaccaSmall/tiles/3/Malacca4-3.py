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
    GeoViewpoint(description='GeoViewpoint_3_43',geoSystem=['GDC'],position=(3.3890484551644233,101.7110626388113,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(3.3890484551644233,101.7110626388113,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca8-6.x3d'],child2Url=['../../tiles/4/Malacca8-7.x3d'],child3Url=['../../tiles/4/Malacca9-6.x3d'],child4Url=['../../tiles/4/Malacca9-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca4-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.070985940057265,101.29356261898111,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[4,6,5,5,7,9,6,36,33,93,50,68,33,113,58,193,699,374,158,172,104,175,1,7,4,5,9,4,8,36,20,46,42,58,91,242,98,271,718,637,444,133,175,157,0,1,8,5,26,30,37,54,19,27,91,85,59,108,315,300,706,654,546,335,123,232,2,5,12,8,11,51,28,41,51,94,34,72,309,155,155,169,477,451,728,235,435,344,0,6,8,12,28,76,69,53,43,52,60,52,74,65,144,120,644,334,431,601,798,538,0,7,12,7,16,48,34,46,87,110,39,41,253,197,182,113,1168,261,409,905,435,270,0,8,8,34,108,99,24,51,60,50,39,96,178,355,378,354,848,527,520,747,599,478,2,11,11,45,16,16,46,49,117,56,57,157,129,434,274,416,996,849,791,642,525,521,3,5,10,23,23,32,52,119,294,83,142,105,102,383,1008,1153,632,747,668,514,167,229,5,6,6,11,49,46,55,63,176,253,176,384,255,596,717,705,938,910,642,252,144,99,11,11,16,8,60,77,47,52,509,478,201,323,748,585,436,956,805,855,555,139,99,97,10,5,10,11,52,22,27,33,125,338,446,902,733,315,399,620,727,733,136,134,159,108,5,4,6,7,56,24,51,75,68,289,414,911,815,733,286,644,479,384,132,143,94,123,12,8,13,11,13,32,98,67,85,61,418,499,1450,1139,619,541,463,510,93,79,81,77,23,26,9,10,25,22,53,64,93,44,152,607,1704,1130,500,192,411,127,87,57,86,80,21,21,20,20,19,65,32,78,53,83,85,794,1049,976,540,146,252,210,76,120,67,61,22,26,18,30,19,63,81,70,46,100,167,711,779,615,176,156,178,87,69,79,80,98,19,23,17,36,38,69,84,60,307,63,347,601,1267,867,174,137,125,89,131,88,80,71,24,20,29,27,83,59,58,78,68,82,202,378,951,956,200,302,92,95,172,92,89,84,23,24,22,40,264,105,81,79,107,323,261,412,853,1042,399,260,95,112,106,113,135,80,24,21,31,34,50,143,69,80,250,680,548,575,971,765,241,118,86,98,121,141,112,101,24,20,32,36,49,129,74,82,244,709,566,584,1011,724,253,113,85,100,118,138,135,105],
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
