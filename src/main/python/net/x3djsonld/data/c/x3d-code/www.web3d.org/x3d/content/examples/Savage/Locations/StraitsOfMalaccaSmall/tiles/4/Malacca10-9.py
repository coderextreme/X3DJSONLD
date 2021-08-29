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
        texture=ImageTexture(url=['../../images/4/Malacca10-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.7071109702715814,102.54606267847167,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[67,87,74,45,37,34,41,69,398,419,560,343,294,55,42,88,59,62,82,117,78,49,80,86,94,89,86,38,38,227,553,540,570,480,152,102,78,115,82,111,84,101,61,52,122,83,147,69,88,47,59,496,671,453,225,383,210,122,111,91,118,85,65,36,56,59,101,80,121,69,81,49,108,279,263,190,216,463,654,193,295,74,92,52,81,46,49,92,61,66,121,67,74,48,154,103,176,386,413,383,404,456,454,156,91,73,77,63,89,93,72,73,135,68,65,57,331,219,325,441,585,281,361,767,231,137,78,78,61,170,67,325,67,100,121,83,100,62,340,334,500,546,795,282,160,457,196,175,197,66,104,72,203,648,72,99,121,91,100,67,179,359,551,810,828,249,100,115,102,90,69,78,87,215,411,665,92,122,142,87,79,101,114,506,648,888,510,181,91,102,79,64,115,126,105,131,579,679,92,86,99,90,96,110,118,408,464,417,191,101,115,103,79,87,100,162,115,194,458,507,74,76,87,102,109,106,202,398,463,136,89,76,70,75,69,95,120,299,194,290,349,556,55,72,68,89,80,168,476,266,238,151,90,92,95,89,107,115,191,397,369,255,552,454,59,79,68,84,79,209,586,268,200,144,120,117,108,86,125,181,430,510,197,422,578,382,57,62,77,98,87,266,499,296,540,128,113,126,117,137,101,200,532,347,516,675,451,383,73,60,76,86,83,232,357,121,175,131,115,110,136,138,122,249,220,448,708,585,423,454,79,69,74,89,86,395,229,141,116,109,134,143,131,159,145,146,335,327,499,403,306,175,87,75,70,67,98,301,112,95,101,124,133,138,130,116,152,348,207,340,652,663,526,217,96,73,69,75,93,120,99,135,112,114,105,146,185,205,257,289,435,610,745,747,669,169,81,90,61,77,242,100,77,109,116,140,132,140,139,239,403,313,548,672,511,398,254,189,141,246,66,131,185,110,102,95,104,103,150,134,147,488,261,370,535,423,392,275,245,254,283,202,67,136,86,76,86,115,268,102,120,147,164,371,331,418,962,713,422,479,324,455,408,343,146,104,94,99,111,125,153,117,127,162,448,220,355,487,688,1221,1052,830,471,349,459,363,155,98,93,100,110,115,142,117,124,161,478,220,337,485,705,1263,1075,859,494,335],
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
