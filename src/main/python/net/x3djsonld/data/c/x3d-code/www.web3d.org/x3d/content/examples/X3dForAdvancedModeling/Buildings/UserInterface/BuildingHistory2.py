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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    #  Authors need to replace asterisked values or delete unneeded meta tags as appropriate 
    meta(content='BuildingHistory2.x3d',name='title'),
    meta(content='User interface panel for architectural models - Example historic building - Earlier age model 2',name='description'),
    meta(content='Michele Foti, Don Brutzman',name='creator'),
    meta(content='15 January 2015',name='created'),
    meta(content='27 November 2015',name='modified'),
    meta(content='Under development',name='warning'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license'),
    #  Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: http://www.rfc-editor.org/rfc/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L 
    ]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchScript_more_readable.js.js.',name='ArchPrototype',
      ProtoInterface=ProtoInterface(
        #  COLOR OF ARCH 
        field=[
        field(accessType='inputOutput',appinfo='color of arch',name='diffuseColor',type='SFColor',value=(0.2,0.8,0.8)),
        field(accessType='inputOutput',appinfo='color of arch',name='emissiveColor',type='SFColor',value=(0.2,0.8,0.8)),
        #  INPUT PARAMETERS 
        #  General parameters: measures in meters 
        field(accessType='initializeOnly',appinfo='clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference',name='clearSpanWidth',type='SFFloat',value=4),
        field(accessType='initializeOnly',appinfo='riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference',name='riseHeight',type='SFFloat',value=2),
        field(accessType='initializeOnly',appinfo='depth',name='depth',type='SFFloat',value=3),
        field(accessType='initializeOnly',appinfo='topAbutmentHeight:topAbutmentHeight=0 means no topAbutment',name='topAbutmentHeight',type='SFFloat',value=0.5),
        field(accessType='initializeOnly',appinfo='pierWidth:pierWidtht=0 means no pierWidth',name='pierWidth',type='SFFloat',value=0.5),
        field(accessType='initializeOnly',appinfo='pierHeight: pierHeight=0 means no pierHeight',name='pierHeight',type='SFFloat',value=1),
        #  Parameters to create to create shapes related to arch: put true to apply 
        field(accessType='initializeOnly',appinfo='archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width',name='archHalf',type='SFBool',value=False),
        field(accessType='initializeOnly',appinfo='archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.',name='archHalfExtensionWidth',type='SFFloat',value=0),
        field(accessType='initializeOnly',appinfo='onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.',name='onlyIntrados',type='SFBool',value=False),
        field(accessType='initializeOnly',appinfo='archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.',name='archFilled',type='SFBool',value=False),
        field(accessType='initializeOnly',appinfo='archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.',name='archHalfFilled',type='SFBool',value=False),
        field(accessType='initializeOnly',appinfo='lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.',name='lintel',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        #  First node determines node type of this prototype 
        #  IndexedFaceset creates arch 
        children=[
        Transform(DEF='ArchTransform',
          children=[
          Shape(DEF='Arch',
            #  note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly 
            geometry=IndexedFaceSet(DEF='ArchIndex',convex=False,solid=False,
              coord=Coordinate(DEF='ArchChord')),
            appearance=Appearance(
              material=Material(DEF='MaterialNode',
                IS=IS(
                  connect=[
                  connect(nodeField='emissiveColor',protoField='emissiveColor'),
                  connect(nodeField='diffuseColor',protoField='diffuseColor')]))))]),
        #  Subsequent nodes do not render, but still must be a valid X3D subgraph 
        #  This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs 
        Script(DEF='ArchScript',url=["ArchScript.js","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchScript.js"],
          #  INPUT PARAMETERS 
          #  General parameters 
          #  Parameters to create to create shapes related to arch: put true to apply 
          #  OUTPUT PARAMETERS 
          field=[
          field(accessType='initializeOnly',appinfo='user or default input for clearSpanWidth parameter',name='clearSpanWidth',type='SFFloat'),
          field(accessType='initializeOnly',appinfo='user or default input for riseHeight parameter',name='riseHeight',type='SFFloat'),
          field(accessType='initializeOnly',appinfo='user or default input for depth parameter',name='depth',type='SFFloat'),
          field(accessType='initializeOnly',appinfo='user or default input for topAbutmentHeight parameter',name='topAbutmentHeight',type='SFFloat'),
          field(accessType='initializeOnly',appinfo='user or default input for pierWidth parameter',name='pierWidth',type='SFFloat'),
          field(accessType='initializeOnly',appinfo='user or default input for pierHeight parameter',name='pierHeight',type='SFFloat'),
          field(accessType='initializeOnly',appinfo='user or default input for archHalf parameter',name='archHalf',type='SFBool'),
          field(accessType='initializeOnly',appinfo='user or default input for archHalfExtensionWidth parameter',name='archHalfExtensionWidth',type='SFFloat'),
          field(accessType='initializeOnly',appinfo='user or default input for onlyIntrados parameter',name='onlyIntrados',type='SFBool'),
          field(accessType='initializeOnly',appinfo='user or default input for archFilled parameter',name='archFilled',type='SFBool'),
          field(accessType='initializeOnly',appinfo='user or default input for archHalfFilled parameter',name='archHalfFilled',type='SFBool'),
          field(accessType='initializeOnly',appinfo='user or default input for lintel parameter',name='lintel',type='SFBool'),
          field(accessType='outputOnly',appinfo='computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth',name='computedScale',type='SFVec3f'),
          field(accessType='outputOnly',appinfo='send computed points to the Coordinate node',name='pointOut',type='MFVec3f'),
          field(accessType='outputOnly',appinfo='send computed indices to the IndexedFaceSet node',name='indexOut',type='MFInt32')],
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
            connect(nodeField='lintel',protoField='lintel')])),
        ROUTE(fromField='computedScale',fromNode='ArchScript',toField='scale',toNode='ArchTransform'),
        ROUTE(fromField='pointOut',fromNode='ArchScript',toField='point',toNode='ArchChord'),
        ROUTE(fromField='indexOut',fromNode='ArchScript',toField='set_coordIndex',toNode='ArchIndex')])),
    Transform(translation=(0,0,-5),
      children=[
      Shape(DEF='floor',
        geometry=Box(size=(15,0.1,20)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(translation=(0,1.75,-0.49),
      children=[
      ProtoInstance(DEF='arc3D1',name='ArchPrototype',
        fieldValue=[
        fieldValue(name='diffuseColor',value=(1,0.75,0.25)),
        fieldValue(name='emissiveColor',value=(1,0.75,0.25)),
        fieldValue(name='clearSpanWidth',value=1.75),
        fieldValue(name='riseHeight',value=0.5),
        fieldValue(name='depth',value=0.5),
        fieldValue(name='pierWidth',value=4.87),
        fieldValue(name='pierHeight',value=1.75),
        fieldValue(name='topAbutmentHeight',value=0.25)])]),
    Transform(rotation=(0,1,0,1.570796326794897),translation=(5,1.76,-5),
      children=[
      ProtoInstance(DEF='arc3D2',name='ArchPrototype',
        fieldValue=[
        fieldValue(name='diffuseColor',value=(1,0.75,0.25)),
        fieldValue(name='emissiveColor',value=(1,0.75,0.25)),
        fieldValue(name='clearSpanWidth',value=1),
        fieldValue(name='riseHeight',value=0.5),
        fieldValue(name='depth',value=0.75),
        fieldValue(name='pierWidth',value=4),
        fieldValue(name='pierHeight',value=1.75),
        fieldValue(name='topAbutmentHeight',value=0.25)])]),
    Transform(rotation=(0,1,0,-1.570796326794897),translation=(-5,1.76,-5),
      children=[
      ProtoInstance(DEF='arc3D3',name='ArchPrototype',
        fieldValue=[
        fieldValue(name='diffuseColor',value=(1,0.75,0.25)),
        fieldValue(name='emissiveColor',value=(1,0.75,0.25)),
        fieldValue(name='clearSpanWidth',value=1),
        fieldValue(name='riseHeight',value=0.5),
        fieldValue(name='depth',value=0.75),
        fieldValue(name='pierWidth',value=4),
        fieldValue(name='pierHeight',value=1.75),
        fieldValue(name='topAbutmentHeight',value=0.25)])]),
    Transform(translation=(0,1.3,-10),
      children=[
      Shape(DEF='BackWall',
        geometry=Box(size=(11.5,2.52,0.9)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(translation=(0,2.51,-5),
      children=[
      Shape(DEF='roof2',
        geometry=Box(size=(11.5,0.1,10.02)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BuildingHistory2.py")
