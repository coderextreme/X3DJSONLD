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
    GeoViewpoint(description='GeoViewpoint_3_64',geoSystem=['GDC'],position=(5.384043785620683,101.90825043207244,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(5.384043785620683,101.90825043207244,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca12-8.x3d'],child2Url=['../../tiles/4/Malacca12-9.x3d'],child3Url=['../../tiles/4/Malacca13-8.x3d'],child4Url=['../../tiles/4/Malacca13-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca6-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.376668737772938,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[23,10,27,598,780,1154,1113,399,307,102,137,100,109,185,361,77,145,536,631,722,712,1079,24,25,24,41,883,1060,892,542,193,152,247,371,187,504,284,126,202,282,448,345,198,243,29,78,45,221,1085,1609,1492,510,542,206,214,126,199,306,585,182,179,124,138,425,485,154,42,62,46,432,1000,1775,1332,822,633,210,532,171,329,961,532,603,186,179,346,546,953,764,210,256,70,172,1270,1598,979,306,226,218,309,177,333,415,241,676,366,259,945,275,775,563,76,122,93,429,1186,1049,1381,652,383,232,291,402,862,178,204,481,134,804,273,230,1020,1127,275,53,127,253,452,822,1463,671,336,145,144,120,187,139,112,122,158,209,521,293,781,570,856,147,978,165,690,1237,1223,310,303,305,532,129,106,110,151,120,380,190,145,146,299,407,777,80,629,144,683,1307,1437,721,264,203,154,152,95,161,78,157,638,395,300,150,36,29,1444,326,274,160,1231,326,1255,1612,491,322,432,506,75,227,85,309,401,430,320,322,43,188,853,523,185,130,477,261,1324,1221,821,950,1080,56,203,156,58,445,360,659,221,160,20,18,900,662,188,238,179,626,442,1057,1069,1100,230,63,86,280,240,848,106,894,248,56,35,13,896,411,425,151,470,254,651,690,1238,883,67,236,342,53,49,966,126,799,40,26,10,6,178,640,232,689,640,289,763,875,649,564,78,157,130,34,67,537,45,714,29,8,6,5,88,404,317,435,836,288,406,609,762,174,136,161,36,37,410,558,16,12,7,6,6,6,107,919,386,296,1032,872,373,510,520,558,51,44,43,22,290,12,9,5,4,4,38,5,235,490,637,236,924,677,1246,499,272,328,22,42,20,15,36,5,4,5,4,5,5,5,350,356,760,253,480,211,655,327,149,186,34,18,14,18,13,3,5,6,4,5,5,3,144,238,589,255,127,229,654,373,50,553,25,8,5,13,7,4,6,6,4,5,4,4,277,366,844,124,157,563,59,513,46,255,10,8,6,7,5,6,6,5,6,5,5,6,173,300,367,317,55,695,40,612,36,14,7,6,6,5,6,6,5,5,6,6,6,5,201,350,337,261,66,678,40,645,39,12,8,8,5,5,6,5,4,3,5,7,7,6],
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
