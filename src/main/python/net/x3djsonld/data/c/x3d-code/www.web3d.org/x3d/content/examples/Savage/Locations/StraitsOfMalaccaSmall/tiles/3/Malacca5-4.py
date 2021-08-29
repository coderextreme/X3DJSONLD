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
    GeoViewpoint(description='GeoViewpoint_3_54',geoSystem=['GDC'],position=(4.0251734853787395,102.54606267847167,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(4.0251734853787395,102.54606267847167,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca10-8.x3d'],child2Url=['../../tiles/4/Malacca10-9.x3d'],child3Url=['../../tiles/4/Malacca11-8.x3d'],child4Url=['../../tiles/4/Malacca11-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca5-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.7071109702715814,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[105,359,468,96,73,73,48,47,94,74,75,89,36,30,77,282,169,34,65,118,80,97,109,106,169,89,84,59,68,48,67,65,82,103,32,31,112,485,59,51,63,75,92,63,126,111,86,92,86,81,62,47,122,87,56,100,43,36,556,668,253,62,75,81,125,45,278,202,136,112,61,49,44,53,86,90,80,127,79,79,480,207,381,94,84,73,65,66,1019,690,366,101,271,196,57,54,75,96,73,101,88,237,235,504,686,254,116,52,160,269,1146,539,401,432,117,182,42,48,72,108,73,118,83,241,483,952,110,106,60,103,613,760,1560,760,193,495,308,70,63,46,59,84,83,126,92,116,541,297,89,67,104,108,389,593,1693,710,112,509,204,70,49,51,49,58,60,79,81,515,310,91,88,102,218,165,710,427,645,288,136,601,345,74,59,64,53,55,52,77,89,451,481,128,100,112,351,409,396,333,594,137,150,464,354,97,107,56,92,78,81,73,91,246,116,133,128,149,352,507,296,178,327,106,125,99,213,148,73,62,118,77,80,66,82,99,123,114,141,303,321,811,355,105,152,99,115,114,293,129,55,62,131,97,237,64,150,94,91,143,157,271,630,530,204,363,131,84,110,108,119,114,72,94,171,521,462,165,91,113,156,128,408,327,802,1318,473,446,180,182,80,160,80,81,71,105,262,373,332,473,118,123,389,181,274,279,467,527,184,240,158,196,118,70,81,65,72,110,304,383,431,610,151,707,288,386,540,291,374,409,198,136,364,113,119,59,73,66,81,219,333,436,453,423,181,204,189,397,172,237,313,383,239,165,218,134,73,94,87,91,77,148,137,219,235,332,277,299,300,392,232,420,378,488,161,235,126,145,91,90,108,120,75,257,294,131,341,310,211,313,194,561,353,413,311,406,390,165,82,173,93,116,117,182,148,298,145,126,172,408,455,220,336,412,519,402,314,358,178,155,98,322,127,280,121,104,77,244,134,304,106,348,287,225,504,833,375,763,623,437,288,347,102,136,161,221,127,92,89,194,131,404,157,283,278,473,619,649,732,505,797,627,723,691,93,127,171,209,134,84,89,213,135,387,168,285,286,488,614,604,706,488,783,666,693,701],
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
