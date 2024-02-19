####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python ArchPrototype.py
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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='ArchPrototype.x3d',name='title'),
    meta(content='Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.',name='description'),
    meta(content='Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information.',name='description'),
    meta(content='Michele Foti, Don Brutzman',name='creator'),
    meta(content='15 December 2014',name='created'),
    meta(content='27 November 2015',name='modified'),
    meta(content='ArchModelingDiagrams.pdf',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Arch',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='ArchPrototype',appinfo='Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.',
      ProtoInterface=ProtoInterface(
        #  COLOR OF ARCH 
        #  INPUT PARAMETERS 
        #  General parameters: measures in meters 
        #  Parameters to create to create shapes related to arch: put true to apply 
        field=[
        field(name='diffuseColor',accessType='inputOutput',appinfo='color of arch',type='SFColor',value=(0.2,0.8,0.8)),
        field(name='emissiveColor',accessType='inputOutput',appinfo='color of arch',type='SFColor',value=(0.2,0.8,0.8)),
        field(name='clearSpanWidth',accessType='initializeOnly',appinfo='clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference',type='SFFloat',value=4.0),
        field(name='riseHeight',accessType='initializeOnly',appinfo='riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference',type='SFFloat',value=2.0),
        field(name='depth',accessType='initializeOnly',appinfo='depth',type='SFFloat',value=3.0),
        field(name='topAbutmentHeight',accessType='initializeOnly',appinfo='topAbutmentHeight:topAbutmentHeight=0 means no topAbutment',type='SFFloat',value=0.5),
        field(name='pierWidth',accessType='initializeOnly',appinfo='pierWidth:pierWidtht=0 means no pierWidth',type='SFFloat',value=0.5),
        field(name='pierHeight',accessType='initializeOnly',appinfo='pierHeight: pierHeight=0 means no pierHeight',type='SFFloat',value=1.0),
        field(name='archHalf',accessType='initializeOnly',appinfo='archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width',type='SFBool',value=False),
        field(name='archHalfExtensionWidth',accessType='initializeOnly',appinfo='archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.',type='SFFloat',value=0.0),
        field(name='onlyIntrados',accessType='initializeOnly',appinfo='onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.',type='SFBool',value=False),
        field(name='archFilled',accessType='initializeOnly',appinfo='archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.',type='SFBool',value=False),
        field(name='archHalfFilled',accessType='initializeOnly',appinfo='archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.',type='SFBool',value=False),
        field(name='lintel',accessType='initializeOnly',appinfo='lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        #  First node determines node type of this prototype 
        #  IndexedFaceset creates arch 
        children=[
        Transform(DEF='ArchTransform',
          children=[
          Shape(DEF='Arch',
            #  note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly 
            appearance=Appearance(
              material=Material(DEF='MaterialNode',
                IS=IS(
                  connect=[
                  connect(nodeField='emissiveColor',protoField='emissiveColor'),
                  connect(nodeField='diffuseColor',protoField='diffuseColor')]))),
            geometry=IndexedFaceSet(DEF='ArchIndex',convex=False,solid=False,
              coord=Coordinate(DEF='ArchChord')))]),
        #  Subsequent nodes do not render, but still must be a valid X3D subgraph 
        #  This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs 
        Script(DEF='ArchPrototypeScript',url=["../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"],
          #  INPUT PARAMETERS 
          #  General parameters 
          #  Parameters to create to create shapes related to arch: put true to apply 
          #  OUTPUT PARAMETERS 
          field=[
          field(name='clearSpanWidth',accessType='initializeOnly',appinfo='user or default input for clearSpanWidth parameter',type='SFFloat'),
          field(name='riseHeight',accessType='initializeOnly',appinfo='user or default input for riseHeight parameter',type='SFFloat'),
          field(name='depth',accessType='initializeOnly',appinfo='user or default input for depth parameter',type='SFFloat'),
          field(name='topAbutmentHeight',accessType='initializeOnly',appinfo='user or default input for topAbutmentHeight parameter',type='SFFloat'),
          field(name='pierWidth',accessType='initializeOnly',appinfo='user or default input for pierWidth parameter',type='SFFloat'),
          field(name='pierHeight',accessType='initializeOnly',appinfo='user or default input for pierHeight parameter',type='SFFloat'),
          field(name='archHalf',accessType='initializeOnly',appinfo='user or default input for archHalf parameter',type='SFBool'),
          field(name='archHalfExtensionWidth',accessType='initializeOnly',appinfo='user or default input for archHalfExtensionWidth parameter',type='SFFloat'),
          field(name='onlyIntrados',accessType='initializeOnly',appinfo='user or default input for onlyIntrados parameter',type='SFBool'),
          field(name='archFilled',accessType='initializeOnly',appinfo='user or default input for archFilled parameter',type='SFBool'),
          field(name='archHalfFilled',accessType='initializeOnly',appinfo='user or default input for archHalfFilled parameter',type='SFBool'),
          field(name='lintel',accessType='initializeOnly',appinfo='user or default input for lintel parameter',type='SFBool'),
          field(name='computedScale',accessType='outputOnly',appinfo='computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth',type='SFVec3f'),
          field(name='pointOut',accessType='outputOnly',appinfo='send computed points to the Coordinate node',type='MFVec3f'),
          field(name='indexOut',accessType='outputOnly',appinfo='send computed indices to the IndexedFaceSet node',type='MFInt32')],
          IS=IS(
            connect=[
            connect(nodeField='clearSpanWidth',protoField='clearSpanWidth'),
            connect(nodeField='riseHeight',protoField='riseHeight'),
            connect(nodeField='depth',protoField='depth'),
            connect(nodeField='pierWidth',protoField='pierWidth'),
            connect(nodeField='topAbutmentHeight',protoField='topAbutmentHeight'),
            connect(nodeField='pierHeight',protoField='pierHeight'),
            connect(nodeField='archHalf',protoField='archHalf'),
            connect(nodeField='archHalfExtensionWidth',protoField='archHalfExtensionWidth'),
            connect(nodeField='onlyIntrados',protoField='onlyIntrados'),
            connect(nodeField='archFilled',protoField='archFilled'),
            connect(nodeField='archHalfFilled',protoField='archHalfFilled'),
            connect(nodeField='lintel',protoField='lintel')]),

        sourceCode="""
ecmascript:

"""),
        ROUTE(fromField='computedScale',fromNode='ArchPrototypeScript',toField='scale',toNode='ArchTransform'),
        ROUTE(fromField='pointOut',fromNode='ArchPrototypeScript',toField='point',toNode='ArchChord'),
        ROUTE(fromField='indexOut',fromNode='ArchPrototypeScript',toField='set_coordIndex',toNode='ArchIndex')])),
    ProtoInstance(DEF='ArchInstance',name='ArchPrototype',
      fieldValue=[
      fieldValue(name='diffuseColor',value=(0.5,0.3,0.6)),
      fieldValue(name='emissiveColor',value=(0.5,0.3,0.6)),
      fieldValue(name='clearSpanWidth',value=5.0),
      fieldValue(name='riseHeight',value=2.5),
      fieldValue(name='depth',value=2.0),
      fieldValue(name='topAbutmentHeight',value=0.6),
      fieldValue(name='pierWidth',value=1.0),
      fieldValue(name='pierHeight',value=2.0)]),
    #  Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare) 
    Inline(DEF='CoordinateAxes',url=["../data/CoordinateAxes.x3d"])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for ArchPrototype.py:')
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

print("python ArchPrototype.py load and self-test diagnostics complete.")
