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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small15-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.130324311166753,57.23545039395357,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[496,594,701,578,653,498,497,336,329,315,296,284,276,266,256,250,243,239,247,238,251,239,590,663,640,545,557,465,375,346,326,309,298,286,275,265,259,248,243,239,239,234,234,234,679,703,559,529,500,414,379,353,329,311,294,284,274,266,258,249,242,241,234,231,230,232,534,667,566,641,574,410,391,358,329,310,295,284,272,270,253,244,241,236,234,234,229,232,542,633,634,518,453,384,367,350,324,308,294,280,271,261,252,244,239,236,232,231,231,232,675,613,502,529,406,357,359,336,321,305,292,283,270,259,253,246,238,235,232,232,229,231,608,538,552,410,372,348,330,327,317,302,287,277,269,262,251,248,240,237,232,230,228,229,515,460,491,377,360,336,318,310,305,296,283,273,263,256,248,240,240,236,233,229,229,227,456,504,419,363,342,324,308,299,291,284,274,269,265,255,247,246,263,239,236,229,229,229,466,408,448,356,334,316,300,289,286,278,269,261,254,255,251,267,264,246,241,233,229,227,440,429,393,349,326,309,296,284,273,272,265,252,250,233,252,263,279,262,251,244,232,229,431,391,356,336,316,300,292,278,267,267,253,245,240,229,240,272,291,287,257,242,234,229,416,388,365,329,316,305,298,279,263,260,251,241,231,229,222,239,281,284,274,245,251,232,437,385,345,330,316,302,283,266,265,252,247,236,231,217,211,222,234,261,269,254,241,236,436,496,350,322,299,285,274,268,250,246,231,229,218,211,211,212,221,231,246,263,249,241,484,379,324,342,392,284,275,263,244,236,230,223,211,205,202,206,208,216,221,235,260,258,440,344,319,290,277,267,257,242,233,229,216,205,201,192,195,196,198,202,207,216,225,234,400,349,299,307,248,251,243,228,227,221,214,197,188,195,202,208,213,211,207,211,209,214,374,340,307,267,245,234,232,220,219,207,204,193,219,203,207,216,218,217,213,212,213,217,350,331,301,270,238,222,219,215,208,196,193,182,214,207,216,223,231,228,223,221,215,209,304,287,289,261,234,213,212,205,192,185,188,194,212,218,232,270,256,238,235,228,223,222,287,259,266,247,226,208,205,193,187,187,205,208,244,253,258,276,321,281,252,236,233,232,282,261,264,246,224,207,205,195,185,188,207,208,244,257,260,278,320,293,254,236,235,233],
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
