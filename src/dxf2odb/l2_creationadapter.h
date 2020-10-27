#ifndef L2_CREATIONADAPTER_H
#define L2_CREATIONADAPTER_H

#include "../dxflib/dl_creationadapter.h"

class L2_CreationAdapter : public DL_CreationAdapter
{
public:
    L2_CreationAdapter();
    ~L2_CreationAdapter();

    void processCodeValuePair(unsigned int, const std::string&) override;
    void endSection() override;
    void addLayer(const DL_LayerData&) override;
    void addLinetype(const DL_LinetypeData&) override;
    void addLinetypeDash(double) override;
    void addBlock(const DL_BlockData&) override;
    void endBlock() override;
    void addTextStyle(const DL_StyleData&) override;
    void addPoint(const DL_PointData&) override;
    void addLine(const DL_LineData&) override;
    void addXLine(const DL_XLineData&) override;
    void addRay(const DL_RayData&) override;

    void addArc(const DL_ArcData&) override;
    void addCircle(const DL_CircleData&) override;
    void addEllipse(const DL_EllipseData&) override;

    void addPolyline(const DL_PolylineData&) override;
    void addVertex(const DL_VertexData&) override;

    void addSpline(const DL_SplineData&) override;
    void addControlPoint(const DL_ControlPointData&) override;
    void addFitPoint(const DL_FitPointData&) override;
    void addKnot(const DL_KnotData&) override;

    void addInsert(const DL_InsertData&) override;

    void addMText(const DL_MTextData&) override;
    void addMTextChunk(const std::string&) override;
    void addText(const DL_TextData&) override;
    void addArcAlignedText(const DL_ArcAlignedTextData&) override;
    void addAttribute(const DL_AttributeData&) override;

    void addDimAlign(const DL_DimensionData&, const DL_DimAlignedData&) override;
    void addDimLinear(const DL_DimensionData&, const DL_DimLinearData&) override;
    void addDimRadial(const DL_DimensionData&, const DL_DimRadialData&) override;
    void addDimDiametric(const DL_DimensionData&, const DL_DimDiametricData&) override;
    void addDimAngular(const DL_DimensionData&, const DL_DimAngularData&) override;
    void addDimAngular3P(const DL_DimensionData&, const DL_DimAngular3PData&) override;
    void addDimOrdinate(const DL_DimensionData&, const DL_DimOrdinateData&) override;
    void addLeader(const DL_LeaderData&) override;
    void addLeaderVertex(const DL_LeaderVertexData&) override;

    void addHatch(const DL_HatchData&) override;

    void addTrace(const DL_TraceData&) override;
    void add3dFace(const DL_3dFaceData&) override;
    void addSolid(const DL_SolidData&) override;

    void addImage(const DL_ImageData&) override;
    void linkImage(const DL_ImageDefData&) override;
    void addHatchLoop(const DL_HatchLoopData&) override;
    void addHatchEdge(const DL_HatchEdgeData&) override;

    void addXRecord(const std::string&) override;
    void addXRecordString(int, const std::string&) override;
    void addXRecordReal(int, double) override;
    void addXRecordInt(int, int) override;
    void addXRecordBool(int, bool) override;

    void addXDataApp(const std::string&) override;
    void addXDataString(int, const std::string&) override;
    void addXDataReal(int, double) override;
    void addXDataInt(int, int) override;

    void addDictionary(const DL_DictionaryData&) override;
    void addDictionaryEntry(const DL_DictionaryEntryData&) override;

    void endEntity() override;

    void addComment(const std::string&) override;

    void setVariableVector(const std::string&,  double, double, double, int) override;
    void setVariableString(const std::string&, const std::string&, int) override;
    void setVariableInt(const std::string&, int, int) override;
    void setVariableDouble(const std::string&, double, int) override;
};

#endif // L2_CREATIONADAPTER_H
