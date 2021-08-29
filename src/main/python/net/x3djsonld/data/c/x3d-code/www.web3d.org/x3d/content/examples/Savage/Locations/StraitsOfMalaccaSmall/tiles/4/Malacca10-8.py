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
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/Malacca10-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.7071109702715814,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[122,130,113,88,90,100,87,103,93,61,57,81,58,50,46,52,62,77,111,77,75,67,151,135,116,101,94,81,97,92,72,62,57,50,58,45,37,55,64,71,84,76,69,80,237,121,154,158,102,89,81,154,75,53,50,42,40,81,43,53,64,73,79,87,71,122,531,294,246,403,190,183,102,82,51,55,88,51,48,49,49,54,72,96,96,110,65,101,682,519,736,596,410,185,109,60,110,435,359,238,59,64,52,54,59,95,89,125,94,61,1345,947,672,545,406,436,63,396,316,304,133,81,46,48,56,53,92,82,129,94,79,72,1331,1149,581,505,314,229,120,400,180,133,137,68,47,52,47,53,55,98,84,106,84,67,1232,656,520,426,293,160,126,326,140,256,113,71,53,56,66,48,72,77,87,92,75,72,1167,1175,707,349,263,136,429,369,190,235,76,55,51,63,62,54,121,75,83,84,78,92,1763,1221,835,478,322,84,346,321,493,246,63,63,59,61,54,65,58,63,67,71,95,92,1893,1178,893,411,190,179,602,380,441,358,198,62,69,53,62,55,53,55,59,79,62,74,1460,1201,787,366,124,153,543,430,283,183,349,67,67,50,51,59,55,47,64,74,65,55,870,1043,490,331,266,139,831,483,385,133,131,95,51,65,48,56,50,64,59,50,54,59,590,548,435,162,118,148,828,340,396,130,76,56,61,64,61,59,59,55,56,75,61,57,510,461,191,130,161,246,577,454,443,281,158,86,79,73,57,55,56,65,91,72,63,73,608,353,171,105,122,235,405,137,278,312,251,79,76,77,48,58,74,200,71,68,65,79,742,298,115,124,118,97,97,293,118,103,113,116,77,60,64,61,58,154,122,63,88,87,360,137,124,132,164,182,103,141,330,189,87,194,63,67,57,56,52,140,91,89,79,96,135,123,104,92,93,84,100,173,344,107,115,132,66,64,61,59,73,159,105,97,82,81,149,134,86,108,109,86,95,147,106,112,191,69,67,59,61,64,186,180,93,105,246,141,135,147,94,110,89,96,97,174,275,91,115,81,58,67,63,88,218,273,288,261,302,283,116,144,144,108,106,80,108,120,115,262,73,50,70,71,63,86,184,237,278,316,368,408,142,127,139,105,93,79,112,122,112,242,74,45,71,62,69,91,191,246,284,309,399,459],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
