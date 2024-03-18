####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python ArchHalf.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='ArchHalf.x3d',name='title'),
    meta(content='Create a half arch with parameters clearSpanWidth=4; riseHeight=2; depth=3; topAbutmentHeight=0.5; pierWidth=0.5; pierHeight=1. Parameter clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width. Modify them with Transform > scale or editing the IndexedFileSet node. See the reference file ArchModelingDiagrams.pdf and the ArchScript_more_readable.js script to find further information.',name='description'),
    meta(content='Michele Foti, Don Brutzman',name='creator'),
    meta(content='15 December 2014',name='created'),
    meta(content='16 February 2016',name='modified'),
    meta(content='ArchModelingDiagrams.pdf',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Arch',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchHalf.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(DEF='Arch',
      appearance=Appearance(
        material=Material(DEF='MaterialNode',diffuseColor=(1,0.75,0.25))),
      geometry=IndexedFaceSet(DEF='ArchIndex',convex=False,coordIndex=[31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,144,-1,149,31,144,147,-1,134,147,144,145,-1,145,144,62,141,-1,132,133,141,62,-1,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,143,-1,148,94,143,146,-1,142,128,146,143,-1,140,125,143,142,-1,125,126,127,140,-1,31,94,95,32,-1,32,95,96,33,-1,33,96,97,34,-1,34,97,98,35,-1,35,98,99,36,-1,36,99,100,37,-1,37,100,101,38,-1,38,101,102,39,-1,39,102,103,40,-1,40,103,104,41,-1,41,104,105,42,-1,42,105,106,43,-1,43,106,107,44,-1,44,107,108,45,-1,45,108,109,46,-1,46,109,110,47,-1,47,110,111,48,-1,48,111,112,49,-1,49,112,113,50,-1,50,113,114,51,-1,51,114,115,52,-1,52,115,116,53,-1,53,116,117,54,-1,54,117,118,55,-1,55,118,119,56,-1,56,119,120,57,-1,57,120,121,58,-1,58,121,122,59,-1,59,122,123,60,-1,60,123,124,61,-1,61,124,125,62,-1,148,149,147,146,-1,146,147,134,128,-1,128,134,145,142,-1,140,141,145,142,-1,127,133,141,140,-1,127,126,132,133,-1,126,132,62,125,-1,31,94,143,144,-1,142,143,144,145,-1,140,125,62,141,-1,31,94,148,149,-1],solid=False,
        coord=Coordinate(DEF='ArchChord',point=[(2,0,0),(1.9974984,0.1,0),(1.9899749,0.2,0),(1.977372,0.3,0),(1.9595917,0.4,0),(1.9364917,0.5,0),(1.9078784,0.6,0),(1.8734994,0.7,0),(1.8330302,0.8,0),(1.7860571,0.9,0),(1.7320508,1,0),(1.6703293,1.1,0),(1.6,1.2,0),(1.5198684,1.3,0),(1.4282857,1.4,0),(1.3228756,1.5,0),(1.2,1.6,0),(1.0535654,1.7,0),(0.9020948,1.785,0),(0.7599342,1.85,0),(0.6244998,1.9,0),(0.5425634,1.925,0),(0.44440973,1.95,0),(0.36181626,1.967,0),(0.2821347,1.98,0),(0.19974984,1.99,0),(0.16718553,1.993,0),(0.14133294,1.995,0),(0.109503426,1.997,0),(0.089420356,1.998,0),(0.063237645,1.999,0),(0,2,0),(-0.063237645,1.999,0),(-0.089420356,1.998,0),(-0.109503426,1.997,0),(-0.14133294,1.995,0),(-0.16718553,1.993,0),(-0.19974984,1.99,0),(-0.2821347,1.98,0),(-0.36181626,1.967,0),(-0.44440973,1.95,0),(-0.5425634,1.925,0),(-0.6244998,1.9,0),(-0.7599342,1.85,0),(-0.9020948,1.785,0),(-1.0535654,1.7,0),(-1.2,1.6,0),(-1.3228756,1.5,0),(-1.4282857,1.4,0),(-1.5198684,1.3,0),(-1.6,1.2,0),(-1.6703293,1.1,0),(-1.7320508,1,0),(-1.7860571,0.9,0),(-1.8330302,0.8,0),(-1.8734994,0.7,0),(-1.9078784,0.6,0),(-1.9364917,0.5,0),(-1.9595917,0.4,0),(-1.977372,0.3,0),(-1.9899749,0.2,0),(-1.9974984,0.1,0),(-2,0,0),(2,0,3),(1.9974984,0.1,3),(1.9899749,0.2,3),(1.977372,0.3,3),(1.9595917,0.4,3),(1.9364917,0.5,3),(1.9078784,0.6,3),(1.8734994,0.7,3),(1.8330302,0.8,3),(1.7860571,0.9,3),(1.7320508,1,3),(1.6703293,1.1,3),(1.6,1.2,3),(1.5198684,1.3,3),(1.4282857,1.4,3),(1.3228756,1.5,3),(1.2,1.6,3),(1.0535654,1.7,3),(0.9020948,1.785,3),(0.7599342,1.85,3),(0.6244998,1.9,3),(0.5425634,1.925,3),(0.44440973,1.95,3),(0.36181626,1.967,3),(0.2821347,1.98,3),(0.19974984,1.99,3),(0.16718553,1.993,3),(0.14133294,1.995,3),(0.109503426,1.997,3),(0.089420356,1.998,3),(0.063237645,1.999,3),(0,2,3),(-0.063237645,1.999,3),(-0.089420356,1.998,3),(-0.109503426,1.997,3),(-0.14133294,1.995,3),(-0.16718553,1.993,3),(-0.19974984,1.99,3),(-0.2821347,1.98,3),(-0.36181626,1.967,3),(-0.44440973,1.95,3),(-0.5425634,1.925,3),(-0.6244998,1.9,3),(-0.7599342,1.85,3),(-0.9020948,1.785,3),(-1.0535654,1.7,3),(-1.2,1.6,3),(-1.3228756,1.5,3),(-1.4282857,1.4,3),(-1.5198684,1.3,3),(-1.6,1.2,3),(-1.6703293,1.1,3),(-1.7320508,1,3),(-1.7860571,0.9,3),(-1.8330302,0.8,3),(-1.8734994,0.7,3),(-1.9078784,0.6,3),(-1.9364917,0.5,3),(-1.9595917,0.4,3),(-1.977372,0.3,3),(-1.9899749,0.2,3),(-1.9974984,0.1,3),(-2,0,3),(-2,-1,3),(-2.5,-1,3),(-2.5,2.5,3),(2.5,2.5,3),(2.5,-1,3),(2,-1,3),(-2,-1,0),(-2.5,-1,0),(-2.5,2.5,0),(2.5,2.5,0),(2.5,-1,0),(2,-1,0),(2.5,0,3),(2.5,0,0),(-2.5,0,3),(-2.5,0,0),(-2.5,2,3),(-2,2,3),(-2,2,0),(-2.5,2,0),(-2,2.5,3),(-2,2.5,0),(0,2.5,3),(0,2.5,0),(2,2,3),(2.5,2,3),(2.5,2,0),(2,2,0),(2,2.5,3),(2,2.5,0)])))])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for ArchHalf.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python ArchHalf.py load and self-test diagnostics complete.")
