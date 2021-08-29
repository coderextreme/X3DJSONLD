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
    GeoViewpoint(description='GeoViewpoint_3_11',geoSystem=['GDC'],position=(1.4806733645214747,100.04106255949056,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.4806733645214747,100.04106255949056,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca2-2.x3d'],child2Url=['../../tiles/4/Malacca2-3.x3d'],child3Url=['../../tiles/4/Malacca3-2.x3d'],child4Url=['../../tiles/4/Malacca3-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.1626108494143166,99.62356253966037,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[781,523,369,121,134,204,165,169,123,101,108,83,98,82,72,87,66,57,68,42,40,37,691,619,337,168,129,200,185,173,99,135,139,96,130,116,105,71,57,53,52,48,41,39,476,677,345,86,147,202,131,123,195,140,179,155,128,131,77,76,64,40,50,47,37,36,384,495,192,86,140,237,188,175,199,153,172,123,94,123,103,67,57,47,36,38,47,35,302,138,88,92,103,212,240,195,171,127,131,141,122,99,66,44,52,51,47,32,34,32,241,96,94,69,115,159,179,178,191,108,99,107,78,80,86,66,38,47,43,33,31,29,146,90,68,76,125,115,105,172,125,101,101,103,100,107,88,67,56,37,28,24,27,21,113,140,115,59,78,81,95,154,133,143,129,161,122,98,94,59,62,54,41,39,35,32,86,82,108,53,51,74,63,118,84,91,108,148,113,101,87,85,67,54,43,44,36,44,76,80,73,82,62,54,44,84,68,68,74,98,109,129,82,70,44,33,36,42,23,24,97,63,95,74,54,51,40,76,64,64,80,63,69,89,107,47,43,30,44,29,16,23,99,99,96,91,89,65,51,39,44,57,61,109,85,72,75,60,51,46,48,30,15,17,92,123,103,83,69,65,58,56,34,41,59,76,92,58,84,81,87,58,61,47,18,16,178,126,94,86,70,54,48,44,44,32,52,132,104,102,78,97,66,75,61,40,35,44,616,364,136,100,90,81,68,56,52,30,30,53,59,125,99,102,112,87,59,36,56,43,461,262,158,85,64,87,69,53,48,39,29,45,49,132,98,73,101,89,40,57,39,39,469,223,127,76,64,57,42,52,49,47,27,36,55,78,110,121,107,71,54,51,63,49,586,430,194,121,73,155,65,47,26,40,50,24,61,57,104,100,97,63,52,43,77,52,362,472,452,127,184,73,67,38,35,30,33,22,29,38,76,127,93,88,70,47,57,39,362,765,271,240,95,62,51,61,36,25,39,21,49,67,118,104,81,96,60,36,51,24,391,206,158,191,95,62,47,56,57,72,17,17,63,71,59,122,65,47,51,53,33,27,364,199,170,197,88,53,42,57,55,71,17,17,69,69,45,113,64,48,48,49,37,33],
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
