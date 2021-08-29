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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small14-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.018229371682303,57.23545039395357,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[41,43,44,58,114,183,262,234,236,157,171,165,172,184,181,201,217,222,237,239,260,278,42,46,48,64,146,148,184,192,176,195,192,297,179,164,185,198,207,205,249,245,265,284,44,45,53,63,270,169,216,207,178,194,247,230,212,208,177,178,206,228,239,265,300,318,48,47,56,72,162,201,255,213,184,214,292,307,198,165,171,190,221,247,289,307,353,319,52,53,62,87,203,297,275,203,206,227,308,268,182,180,166,182,223,299,342,349,328,311,58,61,82,124,268,307,252,212,309,245,276,247,185,213,173,192,239,276,353,383,322,301,66,75,114,218,210,315,275,252,285,289,297,216,194,202,187,217,224,303,359,325,314,284,79,87,130,188,211,271,261,303,302,327,261,216,233,227,189,189,239,284,308,291,275,259,84,101,127,152,214,300,263,285,312,372,287,220,228,206,196,200,246,253,271,252,259,248,101,118,175,164,202,334,279,422,388,346,259,246,221,244,214,196,195,240,254,218,229,236,122,147,196,209,254,281,296,437,316,283,252,312,217,203,239,227,206,222,222,218,253,255,133,171,226,328,306,372,337,344,339,325,260,237,232,210,200,233,275,206,217,223,243,273,152,190,233,335,506,408,353,379,339,290,265,244,243,234,211,210,205,214,267,251,260,248,175,204,287,383,546,500,375,367,310,290,278,269,284,278,234,210,225,211,244,275,289,292,210,248,353,552,517,433,392,375,334,301,285,307,274,246,224,225,236,215,227,246,266,290,248,346,467,647,549,441,396,358,332,342,309,279,252,252,255,251,224,229,222,241,251,270,277,359,518,698,597,462,403,382,363,327,293,279,254,256,245,242,235,238,232,225,273,280,300,403,514,580,611,558,425,386,369,337,293,298,292,271,255,239,233,238,243,228,255,247,343,423,496,687,502,550,442,377,338,313,297,297,273,258,247,245,239,234,253,231,232,232,412,523,629,606,576,509,418,378,345,315,297,290,279,261,252,251,242,236,249,274,265,251,516,603,732,675,693,592,449,355,337,311,295,284,271,262,259,248,242,238,241,247,281,267,487,570,714,561,665,508,502,338,331,316,296,284,275,265,256,250,244,237,248,239,250,240,496,594,701,578,653,498,497,336,329,315,296,284,276,266,256,250,243,239,247,238,251,239],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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
