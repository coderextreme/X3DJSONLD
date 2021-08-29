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
        texture=ImageTexture(url=['../../images/4/Malacca6-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.434860909842949,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[23,69,74,72,72,71,116,178,283,557,506,422,528,518,661,117,272,758,488,511,418,253,59,64,52,95,78,113,130,110,116,371,543,491,639,468,301,148,448,735,502,353,370,175,44,55,54,94,105,100,72,237,259,446,603,491,463,432,334,308,360,392,439,342,596,518,34,54,56,63,53,54,82,161,216,599,589,505,527,397,509,367,354,341,342,349,373,504,34,40,41,57,79,59,84,82,340,722,553,583,452,468,400,302,341,363,342,337,597,269,38,54,49,76,121,81,66,214,359,655,607,441,293,286,126,403,435,565,384,237,492,174,39,39,78,68,87,93,115,226,246,463,810,448,218,259,120,124,294,691,315,357,50,163,52,63,113,56,143,78,119,116,337,831,729,318,162,188,79,78,271,250,172,104,172,106,42,46,62,63,82,101,113,153,501,450,449,381,208,166,153,110,103,66,176,462,86,214,37,40,41,65,140,115,86,290,354,168,660,498,445,113,113,160,208,266,111,98,47,203,40,97,75,82,119,94,144,311,132,117,327,225,135,216,222,188,233,793,340,115,148,388,33,89,67,103,110,85,97,102,100,116,230,293,436,428,439,179,196,565,269,186,317,187,61,105,74,122,115,97,108,123,129,233,420,610,393,258,338,185,144,383,182,77,424,331,49,113,98,65,117,109,89,112,162,134,468,502,317,218,193,218,123,93,103,82,187,400,69,92,70,86,94,108,113,240,104,134,440,457,436,363,428,430,276,293,78,249,114,44,69,65,82,96,101,126,123,115,106,154,305,525,525,399,572,381,244,98,192,146,73,66,61,87,81,100,118,110,93,131,85,113,387,539,723,734,511,349,298,130,122,252,34,43,61,76,104,123,150,131,109,119,86,159,280,469,522,501,262,181,157,160,195,54,43,39,58,87,85,108,106,167,75,86,91,126,191,372,180,121,133,109,106,98,145,48,23,25,71,79,106,113,114,107,80,112,136,212,180,136,137,135,415,405,178,125,141,62,43,25,69,83,86,107,86,103,95,98,146,306,154,54,126,538,640,440,349,193,96,55,43,32,68,97,79,99,65,88,105,100,72,89,97,74,306,300,459,521,419,290,69,45,28,20,67,96,77,100,73,85,105,101,57,88,73,78,281,247,482,555,424,274,75,52,27,20],
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
