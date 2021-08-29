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
    GeoViewpoint(description='GeoViewpoint_3_64',geoSystem=['GDC'],position=(4.661298515593056,102.54606267847167,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(4.661298515593056,102.54606267847167,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca12-8.x3d'],child2Url=['../../tiles/4/Malacca12-9.x3d'],child3Url=['../../tiles/4/Malacca13-8.x3d'],child4Url=['../../tiles/4/Malacca13-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca6-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.343236000485898,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[93,127,171,209,134,84,89,213,135,387,168,285,286,488,614,604,706,488,783,666,693,701,126,241,210,165,202,118,96,97,178,149,255,401,345,258,502,552,625,784,300,913,1031,1191,135,227,213,160,351,226,118,79,460,342,499,430,484,284,330,476,617,582,300,811,762,792,124,162,244,232,132,114,127,105,192,274,545,445,527,227,430,366,419,867,527,288,268,277,146,213,259,160,215,245,102,253,255,440,375,324,449,146,322,203,373,655,513,241,267,289,139,297,566,287,294,199,206,152,242,190,175,400,231,163,349,235,422,459,208,264,548,273,167,267,305,226,202,178,422,146,359,113,142,170,158,128,192,149,173,335,243,234,223,342,185,238,230,250,205,360,190,112,419,117,176,163,221,126,298,376,394,184,526,305,294,367,182,231,258,631,543,227,476,128,127,165,145,146,123,139,163,682,630,327,535,310,105,188,224,256,558,1536,602,202,202,142,131,149,111,140,126,120,305,256,646,747,711,472,95,91,281,257,810,1471,672,483,169,152,282,128,181,158,182,196,390,282,483,1150,1228,505,133,114,225,391,1509,1569,729,275,207,152,153,276,208,161,550,401,213,306,400,623,1192,965,322,341,212,345,1349,1757,338,675,254,177,492,292,390,174,194,505,330,331,302,524,932,1019,702,552,235,476,1120,1243,982,446,540,382,415,915,274,191,185,366,655,301,398,731,1048,640,752,923,636,845,346,514,226,235,814,442,727,704,229,300,218,355,951,486,478,733,843,707,230,301,764,495,333,238,176,387,763,607,688,344,341,262,294,495,1019,398,226,618,989,892,320,288,791,432,472,169,165,390,507,405,344,194,195,610,684,1189,437,662,197,857,1038,1419,791,796,1190,524,205,192,131,156,452,311,210,210,343,535,1228,1035,473,257,271,281,482,1077,916,368,1003,634,288,191,225,147,619,181,180,107,367,697,850,754,460,358,250,340,1062,1160,873,553,389,225,187,181,165,130,372,233,103,121,151,461,523,598,161,192,348,570,1221,598,565,327,188,146,179,146,142,100,115,116,88,209,137,147,415,564,302,174,423,255,1039,786,455,380,201,135,182,139,143,115,107,115,95,197,124,151,429,580,268,168,380,258,1038,756,454,392],
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
